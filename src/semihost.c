#include "nrf.h"
void semihost_print(char* buffer, int length) {
    if ((CoreDebug->DHCSR & CoreDebug_DHCSR_C_DEBUGEN_Msk)) {
        uint32_t args[3];
        args[0] = (uint32_t) 2;
        args[1] = (uint32_t) buffer;
        args[2] = (uint32_t) length;

        // a few lines of code from https://github.com/lupyuen/remote-pinetime-bot
        __asm( 
                "mov r0, %[cmd] \n"
                "mov r1, %[msg] \n" 
                "bkpt #0xAB \n"
                :  //  Output operand list: (nothing)
                :  //  Input operand list:
                [cmd] "r" (0x5), 
                [msg] "r" (args)
                :  //  Clobbered register list:
                "r0", "r1", "memory"
             );
    };
}


