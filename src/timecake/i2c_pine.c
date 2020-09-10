#include "nrf.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "../wdt.h"

#define PIN_SCL        (7)
#define PIN_SDA        (6)


// TODO use shortcut to automatically send STOP when receive LastTX, for example
// TODO use DMA/IRQ


void i2c_setup() {



    NRF_GPIO->PIN_CNF[PIN_SCL] = ((uint32_t)GPIO_PIN_CNF_DIR_Input      << GPIO_PIN_CNF_DIR_Pos)
        | ((uint32_t)GPIO_PIN_CNF_INPUT_Connect    << GPIO_PIN_CNF_INPUT_Pos)
        | ((uint32_t)GPIO_PIN_CNF_PULL_Pullup      << GPIO_PIN_CNF_PULL_Pos)
        | ((uint32_t)GPIO_PIN_CNF_DRIVE_S0S1       << GPIO_PIN_CNF_DRIVE_Pos)
        | ((uint32_t)GPIO_PIN_CNF_SENSE_Disabled   << GPIO_PIN_CNF_SENSE_Pos);

    NRF_GPIO->PIN_CNF[PIN_SDA] = ((uint32_t)GPIO_PIN_CNF_DIR_Input        << GPIO_PIN_CNF_DIR_Pos)
        | ((uint32_t)GPIO_PIN_CNF_INPUT_Connect    << GPIO_PIN_CNF_INPUT_Pos)
        | ((uint32_t)GPIO_PIN_CNF_PULL_Pullup      << GPIO_PIN_CNF_PULL_Pos)
        | ((uint32_t)GPIO_PIN_CNF_DRIVE_S0S1       << GPIO_PIN_CNF_DRIVE_Pos)
        | ((uint32_t)GPIO_PIN_CNF_SENSE_Disabled   << GPIO_PIN_CNF_SENSE_Pos);


	NRF_TWIM1->FREQUENCY = TWIM_FREQUENCY_FREQUENCY_K400 << TWIM_FREQUENCY_FREQUENCY_Pos;

    NRF_TWIM1->PSEL.SCL = PIN_SCL;
    NRF_TWIM1->PSEL.SDA = PIN_SDA;
    NRF_TWIM1->EVENTS_LASTRX = 0;
    NRF_TWIM1->EVENTS_STOPPED = 0;
    NRF_TWIM1->EVENTS_LASTTX = 0;
    NRF_TWIM1->EVENTS_ERROR = 0;
    NRF_TWIM1->EVENTS_RXSTARTED = 0;
    NRF_TWIM1->EVENTS_SUSPENDED = 0;
    NRF_TWIM1->EVENTS_TXSTARTED = 0;

    NRF_TWIM1->ENABLE = (TWIM_ENABLE_ENABLE_Enabled << TWIM_ENABLE_ENABLE_Pos);


    /* // IRQ
       NVIC_ClearPendingIRQ(_IRQn);
       NVIC_SetPriority(_IRQn, 2);
       NVIC_EnableIRQ(_IRQn);
       */


}


//void TwiMaster::Write(uint8_t deviceAddress, uint8_t registerAddress, const uint8_t *data, size_t size) {
//    ASSERT(size <= maxDataSize);
//    internalBuffer[0] = registerAddress;
//    std::memcpy(internalBuffer+1, data, size);
//    Write(deviceAddress, internalBuffer, size+1, true);
//}


int Read(uint8_t deviceAddress, uint8_t *buffer, size_t size, bool stop) {
    NRF_TWIM1->ADDRESS = deviceAddress;
    NRF_TWIM1->TASKS_RESUME = 0x1UL;
    NRF_TWIM1->RXD.PTR = (uint32_t)buffer;
    NRF_TWIM1->RXD.MAXCNT = size;

    NRF_TWIM1->TASKS_STARTRX = 1;

    int counter = 0;
    while(!NRF_TWIM1->EVENTS_RXSTARTED && !NRF_TWIM1->EVENTS_ERROR){
        wdt_feed();
        counter++;
        if (counter > 5000) return 1;
    };
    NRF_TWIM1->EVENTS_RXSTARTED = 0x0UL;

    while(!NRF_TWIM1->EVENTS_LASTRX && !NRF_TWIM1->EVENTS_ERROR){
        wdt_feed();
        counter++;
        if (counter > 5000) return 1;
    }
    NRF_TWIM1->EVENTS_LASTRX = 0x0UL;

    if (stop || NRF_TWIM1->EVENTS_ERROR) {
        NRF_TWIM1->TASKS_STOP = 0x1UL;
        while(!NRF_TWIM1->EVENTS_STOPPED){
            wdt_feed();
            counter++;
            if (counter > 5000) return 1;
        }
        NRF_TWIM1->EVENTS_STOPPED = 0x0UL;
    }
    else {
        NRF_TWIM1->TASKS_SUSPEND = 0x1UL;
        while(!NRF_TWIM1->EVENTS_SUSPENDED){
            wdt_feed();
            counter++;
            if (counter > 5000) return 1;
        }
        NRF_TWIM1->EVENTS_SUSPENDED = 0x0UL;
    }

    if (NRF_TWIM1->EVENTS_ERROR) {
        NRF_TWIM1->EVENTS_ERROR = 0x0UL;
    }
    return 0;
}

int Write(uint8_t deviceAddress, const uint8_t *data, size_t size, bool stop) {
    NRF_TWIM1->ADDRESS = deviceAddress;
    NRF_TWIM1->TASKS_RESUME = 0x1UL;
    NRF_TWIM1->TXD.PTR = (uint32_t)data;
    NRF_TWIM1->TXD.MAXCNT = size;

    NRF_TWIM1->TASKS_STARTTX = 1;

    int counter = 0;
    while(!NRF_TWIM1->EVENTS_TXSTARTED && !NRF_TWIM1->EVENTS_ERROR){
        wdt_feed();
        counter++;
        if (counter > 5000) return 1;
    }

    NRF_TWIM1->EVENTS_TXSTARTED = 0x0UL;

    while(!NRF_TWIM1->EVENTS_LASTTX && !NRF_TWIM1->EVENTS_ERROR){
        wdt_feed();
        counter++;
        if (counter > 5000) return 1;
    }
    NRF_TWIM1->EVENTS_LASTTX = 0x0UL;

    if (stop || NRF_TWIM1->EVENTS_ERROR) {
        NRF_TWIM1->TASKS_STOP = 0x1UL;
        while(!NRF_TWIM1->EVENTS_STOPPED){
            wdt_feed();
            counter++;
            if (counter > 5000) return 1;
        }
        NRF_TWIM1->EVENTS_STOPPED = 0x0UL;
    }
    else {
        NRF_TWIM1->TASKS_SUSPEND = 0x1UL;
        while(!NRF_TWIM1->EVENTS_SUSPENDED){
            wdt_feed();
            counter++;
            if (counter > 5000) return 1;
        }
        NRF_TWIM1->EVENTS_SUSPENDED = 0x0UL;
    }

    if (NRF_TWIM1->EVENTS_ERROR) {
        NRF_TWIM1->EVENTS_ERROR = 0x0UL;
        uint32_t error = NRF_TWIM1->ERRORSRC;
        NRF_TWIM1->ERRORSRC = error;
    }
    return 0;
}

int i2c_read(uint8_t deviceAddress, uint8_t registerAddress, size_t size, uint8_t *data) {
    int error = 0;
    error |= Write(deviceAddress, &registerAddress, 1, false);
    error |= Read(deviceAddress, data, size, true);
    return error;
}
