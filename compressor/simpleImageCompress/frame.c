uint8_t frame[(240*240 / 8)] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,
0xff,0xff,0xff,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,
0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x17,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x02,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x0b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x2f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x5a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x1f,0xc0,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x1f,0xf0,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,
0xfc,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xfe,0xff,
0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xff,0xff,0x1f,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,0xff,0x1f,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x83,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xfd,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xf9,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,
0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,0xff,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf1,0xff,0xff,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x7f,0xf8,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x7f,0xf0,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x3f,0xf8,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x60,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xf0,
0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xf8,0xff,0xff,
0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xf0,0xff,0xff,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xf8,0xff,0xff,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xf8,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x03,0xf8,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xcc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x03,0xf8,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xe6,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x03,0xf8,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xc2,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xf8,
0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xc0,0xff,0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xf8,0xff,0xff,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xfc,0xff,0xff,0x01,0x00,
0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,
0xff,0x1f,0xfe,0xff,0xff,0xff,0xff,0xff,0x07,0xfc,0xff,0xff,0x03,0x00,0x00,0x00,
0x00,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0x5f,
0xfa,0xff,0xff,0xff,0xff,0xff,0x0f,0xfc,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0xfc,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xfe,0xff,0x7f,0xf0,0xff,
0xff,0xff,0xff,0xff,0x3f,0xfc,0xff,0xff,0x03,0x00,0x00,0x00,0x80,0xff,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xff,0xff,0x47,0xff,0xff,0xff,
0xff,0xff,0x00,0xfc,0xff,0xff,0x03,0x00,0x00,0x00,0xc0,0xff,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0x87,0xff,0xff,0xff,0xff,0x7f,
0x00,0xfc,0xff,0xff,0x03,0x00,0x00,0x00,0xf0,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0x7f,0xfa,0xff,0xff,0xff,0xff,0x00,0xfc,
0xff,0xff,0x03,0x00,0x00,0x00,0xfc,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xfc,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0xfc,0xff,0xff,
0x03,0x00,0x00,0x00,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0xfc,0xff,0xff,0x07,0x00,
0x00,0xc0,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,
0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0xfe,0xff,0xff,0x07,0x00,0x00,0xf0,
0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xfb,0xff,
0xff,0xff,0xff,0xff,0xff,0xe7,0x00,0xfc,0xff,0xff,0x07,0x00,0x00,0xf8,0xff,0x3f,
0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xc9,0xff,0xff,0xff,
0xff,0xff,0xff,0x43,0x00,0xfe,0xff,0xff,0x07,0x00,0x00,0xfe,0xff,0x3f,0xff,0xff,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xea,0xef,0xff,0xff,0xff,0xff,
0x7f,0xc3,0x00,0xfc,0xff,0xff,0x07,0x00,0x00,0xff,0xff,0x1f,0xff,0xff,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc2,0xe7,0xff,0xff,0xff,0xf7,0x3f,0x01,
0x00,0xfc,0xff,0xff,0x07,0x00,0xc0,0xff,0xef,0x1f,0xff,0xff,0x0f,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xf9,0xff,0xff,0xec,0xf7,0x3f,0x00,0x00,0xfc,
0xff,0xff,0x0f,0x00,0xe0,0xff,0xc1,0x3f,0xfc,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xc0,0xe0,0xff,0xff,0xec,0xf3,0x1f,0x00,0x00,0xfe,0xff,0xff,
0x07,0x00,0xf8,0x7f,0xe0,0x7f,0xfc,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xc0,0xe0,0xff,0x7f,0xfc,0xe3,0x1b,0x00,0x00,0xfc,0xff,0xff,0x0f,0x00,
0xfe,0x1f,0xe0,0xff,0xfc,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0xf4,0xff,0xff,0xff,0x61,0x16,0x00,0x00,0xfc,0xff,0xff,0x07,0x80,0xff,0x07,
0xf0,0xff,0xfc,0xc1,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,
0xff,0xff,0xe7,0xe1,0x13,0x00,0x00,0xfc,0xff,0xff,0x07,0xc0,0xff,0x03,0xf8,0xff,
0xfe,0x03,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,
0xf7,0xe0,0x03,0x00,0x00,0xfc,0xff,0xff,0x03,0xf8,0xff,0x00,0xf8,0xff,0xff,0x03,
0xfc,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0x37,0x60,
0x01,0x00,0x00,0xf8,0xff,0xff,0x83,0xfe,0x7f,0x00,0xfc,0xff,0xff,0x07,0xf0,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0x23,0xc0,0x01,0x00,
0x00,0xf8,0xff,0xff,0xe1,0xff,0x3f,0x00,0xfc,0xff,0xff,0x0f,0xe0,0xff,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0x03,0x00,0x02,0x00,0xf0,0xff,
0xff,0xff,0xff,0xff,0x1f,0x00,0xfc,0xff,0xff,0x1f,0x80,0xff,0x3f,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0x03,0x80,0x01,0x00,0xf8,0xff,0xff,0xff,
0xff,0xff,0x0f,0x00,0xfe,0xff,0xff,0x1f,0x00,0xff,0xff,0x02,0x00,0x00,0xfa,0x03,
0x00,0x00,0x00,0xfc,0xff,0xff,0x07,0x40,0x01,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,
0x07,0x00,0xfe,0xff,0xff,0x1f,0x00,0xfc,0xff,0x7f,0x65,0xf9,0xff,0x07,0x00,0x00,
0x00,0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0x07,0x00,
0xfe,0xff,0xff,0x3f,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xc0,0xff,
0xff,0xff,0x7f,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0xfe,0xff,
0xff,0x3f,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xfc,0xff,0xff,0xff,
0xff,0x03,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xf7,0x07,0x00,0xff,0xff,0xff,0x7f,
0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0x1f,
0x00,0x00,0xff,0xff,0xff,0xff,0x01,0xf8,0x0f,0x00,0xff,0xff,0xff,0x7f,0x00,0xf8,
0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,
0xff,0xff,0xff,0xff,0x00,0xf8,0x3f,0x00,0xfe,0xff,0xff,0x7f,0x00,0xf0,0xff,0xae,
0xfe,0xff,0xff,0x3f,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x80,0xff,0xff,
0xff,0x7f,0x00,0xfc,0x3f,0x00,0xfe,0xff,0xff,0x7f,0x00,0xf8,0x07,0x00,0x80,0xfe,
0xff,0x3f,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x80,0xff,0xfb,0xff,0x7f,
0x00,0xfe,0x7f,0x00,0xfe,0xff,0xff,0x7f,0x00,0xfc,0x0f,0x00,0x00,0xf8,0xff,0x7f,
0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xc0,0xff,0xf8,0xff,0x3f,0x00,0xfe,
0x7f,0x00,0xfe,0xff,0xff,0x7f,0x00,0xfe,0x1f,0x00,0x00,0xf0,0xef,0xff,0xc0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xe0,0x7f,0xf8,0xff,0x3f,0x00,0xff,0x7f,0x00,
0xfc,0xff,0xff,0x7f,0x00,0xfe,0x3f,0x00,0x00,0xf8,0xc7,0xff,0xe0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x7f,0xf0,0x7f,0xf8,0xff,0x1f,0x00,0xff,0xff,0x00,0xfc,0xff,
0xff,0x3f,0x00,0xff,0x3f,0x00,0x00,0xfc,0x87,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x7f,0xf0,0x3f,0xfc,0xff,0x1f,0x00,0xff,0xff,0x00,0xfc,0xff,0xff,0x7f,
0x00,0xff,0x7f,0x00,0x00,0xfe,0x87,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xf8,0x1f,0xfe,0xff,0x1f,0x80,0xff,0xff,0x01,0xfc,0xff,0xff,0x3f,0x80,0xff,
0x7f,0x00,0x00,0xff,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x0f,0xfe,0xff,0x1f,0x80,0xff,0xff,0x01,0xf8,0xff,0xff,0x3f,0x80,0xff,0x7f,0x00,
0x00,0xff,0x1f,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xff,
0xff,0x0f,0x80,0xff,0xff,0x01,0xf8,0xff,0xff,0x3f,0x80,0xff,0xff,0x00,0x80,0xff,
0x1f,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xff,0xff,0x07,
0xc0,0xff,0xff,0x03,0xf8,0xff,0xff,0x1f,0xc0,0xff,0xff,0x00,0x80,0xff,0x3f,0xf8,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x83,0xff,0xff,0x01,0xc0,0xff,
0xff,0x03,0xf8,0xff,0xff,0x1f,0xc0,0xff,0xff,0x01,0x80,0xff,0x3f,0xf0,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x81,0xff,0xff,0x01,0xc0,0xff,0xff,0x03,
0xf0,0xff,0xff,0x1f,0xc0,0xff,0xff,0x01,0xc0,0xff,0x3f,0xe0,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x80,0xff,0xff,0x01,0xc0,0xff,0xff,0x01,0xf0,0xff,
0xff,0x0f,0xc0,0xff,0xff,0x01,0xc0,0xff,0x7f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xc3,0xff,0xff,0x01,0xc0,0xff,0xff,0x01,0xf0,0xff,0xff,0x1f,
0xe0,0xff,0xff,0x01,0xc0,0xff,0x7f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xc7,0xff,0xff,0x01,0x80,0xff,0xff,0x01,0xf0,0xff,0xff,0x0f,0xc0,0xff,
0xff,0x01,0xe0,0xff,0xff,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x01,0x80,0xff,0xff,0x01,0xe0,0xff,0xff,0x0f,0xe0,0xff,0xff,0x01,
0xe0,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x03,0x80,0xff,0xff,0x01,0xe0,0xff,0xff,0x0f,0xc0,0xff,0xff,0x00,0xf0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,
0x80,0xff,0xff,0x00,0xe0,0xff,0xff,0x0f,0xc0,0xff,0xff,0x00,0xe0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0xff,
0xff,0x00,0xc0,0x7f,0xfe,0x07,0x80,0xff,0xff,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0xff,0xff,0x00,
0xc0,0x7f,0xfe,0x07,0x80,0xff,0xff,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0xff,0xff,0x00,0xc0,0x7f,
0xfe,0x07,0x80,0xff,0x7f,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0xff,0x7f,0x00,0xc0,0x7f,0xfc,0x07,
0x80,0xff,0xff,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x00,0x00,0xfe,0x7f,0x00,0x80,0x3f,0xfc,0x03,0x00,0xff,
0x7f,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x00,0x00,0xfe,0x7f,0x00,0x80,0x3f,0xfc,0x07,0x00,0xff,0x7f,0x00,
0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x7f,0x00,0x00,0xfe,0x7f,0x00,0x80,0x3f,0xfc,0x03,0x00,0xfe,0x3f,0x00,0x80,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,
0x00,0xfe,0x3f,0x00,0x80,0x3f,0xf8,0x03,0x00,0xfe,0x7f,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0xfe,
0x3f,0x00,0x80,0x1f,0xf8,0x01,0x00,0xfe,0x3f,0x00,0x80,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0xfc,0x3f,0x00,
0x00,0x1f,0xf8,0x03,0x00,0xfe,0x3f,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0xfc,0x3f,0x00,0x00,0x1f,
0xf8,0x01,0x00,0xfc,0x3f,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0xfc,0x1f,0x00,0x00,0x1f,0xf0,0x01,
0x00,0xfc,0x3f,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0xfc,0x1f,0x00,0x00,0x0e,0xf0,0x00,0x00,0xfc,
0x1f,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x1f,0x00,0x00,0xf8,0x1f,0x00,0x00,0x0e,0xf0,0x01,0x00,0xfc,0x1f,0x00,
0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x1f,0x00,0x00,0xf8,0x1f,0x00,0x00,0x0e,0xe0,0x00,0x00,0xf8,0x1f,0x00,0x00,0xfe,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,
0x00,0xf8,0x0f,0x00,0x00,0x0c,0xe0,0x00,0x00,0xf8,0x1f,0x00,0x00,0xfc,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xf8,
0x0f,0x00,0x00,0x04,0xe0,0x00,0x00,0xf8,0x0f,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xf0,0x0f,0x00,
0x00,0x00,0x40,0x00,0x00,0xf0,0x0f,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0xf0,0x0f,0x00,0x00,0x00,
0x00,0x00,0x00,0xf0,0x0f,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0xf0,0x0f,0x00,0x00,0x00,0x00,0x00,
0x00,0xf0,0x0f,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x07,0x00,0x00,0xf0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,
0x0f,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x03,0x00,0x00,0xf0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x07,0x00,
0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x03,0x00,0x00,0xe0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x07,0x00,0x00,0xf0,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,
0x00,0xe0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x07,0x00,0x00,0xf0,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0xe0,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x03,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0xe0,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0xc0,0x03,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0xc0,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0xc0,0x03,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xfd,0x00,0x00,0x00,0xc0,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0xc0,0x03,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xfd,0x00,0x00,0x00,0xc0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0x03,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x00,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x00,
0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,
0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xc0,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,
0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,
0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xe7,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xf3,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xf0,0xff,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xf8,0xff,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,
0xff,0xff,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,
0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,0xff,0xff,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xf0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0x7f,0xf0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0x7f,0xf0,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xcf,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0x7f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xcf,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xfc,0xff,0x3f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc7,
0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xfc,0xff,0x3f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc7,0xff,0xff,
0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,
0xff,0x3f,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x87,0xff,0xff,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0x1f,
0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x87,0xff,0xff,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0x1f,0xe0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x87,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,0x1f,0xf0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x07,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0x0f,0xe0,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x07,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0x0f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x07,0xfe,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xfc,0xff,0xff,0x0f,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,
0xfe,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0xff,0xff,0x07,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xfe,0xff,
0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0xe0,0x00,0x00,0x00,0x00,0x00,0x80,0xff,0xff,
0xff,0x07,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xfc,0xff,0xff,0x7f,
0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0x03,
0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xfc,0xff,0xff,0xff,0x01,0x00,
0x00,0x00,0x00,0xf8,0x03,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0x03,0xf0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xf8,0xff,0xff,0xff,0x07,0x00,0x00,0x00,
0x00,0xfc,0x0f,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0x03,0xe0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x07,0xf8,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0xfe,
0x0f,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0x01,0xf0,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x07,0xf8,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0xfe,0x1f,0x00,
0x00,0x00,0x80,0xff,0xff,0xff,0xff,0x01,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x07,0xf0,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0xff,0x3f,0x00,0x00,0x00,
0xc0,0xff,0xff,0xff,0xff,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,
0xe0,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0xff,0x7f,0x00,0x00,0x00,0xf0,0xff,
0xff,0xff,0xff,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xe0,0xff,
0xff,0xff,0xff,0x07,0x00,0x00,0x80,0xff,0xff,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,
0x7f,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xc0,0xff,0xff,0xff,
0xff,0x1f,0x00,0x00,0x80,0xff,0xff,0x01,0x00,0x00,0xfe,0xff,0xff,0xff,0x3f,0x00,
0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x80,0xff,0xff,0xff,0xff,0x3f,
0x00,0x00,0xe0,0xff,0xff,0x03,0x00,0x80,0xff,0xff,0xff,0xff,0x3f,0x00,0xf0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x80,0xff,0xff,0xff,0xff,0xff,0x00,0x00,
0xf0,0xff,0xff,0x0f,0x00,0xc0,0xff,0xff,0xff,0xff,0x1f,0x00,0xf0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0xf8,0xff,
0xff,0x1f,0x00,0xe0,0xff,0xff,0xff,0xff,0x0f,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x0f,0x00,0xfe,0xff,0xff,0xff,0xff,0x07,0x00,0xfc,0xff,0xff,0x3f,
0x00,0xf8,0xff,0xff,0xff,0xff,0x07,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x0f,0x00,0xfc,0xff,0xff,0xff,0xff,0x1f,0x00,0xfe,0xff,0xff,0x7f,0x00,0xfe,
0xff,0xff,0xff,0xff,0x03,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,
0x00,0xf8,0xff,0xff,0xff,0xff,0x3f,0x00,0xff,0xff,0xff,0x7f,0x00,0xff,0xff,0xff,
0xff,0xff,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0xe0,
0xff,0xff,0xff,0xff,0xff,0x80,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0x7f,
0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0xc0,0xff,0xff,
0xff,0xff,0xff,0x83,0xff,0xff,0xff,0xff,0xf1,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,
0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xff,0xff,0xff,0xff,
0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xf0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,0x00,0xf0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x07,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x0f,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x1f,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,
0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x0f,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,
0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,
0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0xf0,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0xc0,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0xfc,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x7f,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,
0x00,0x00,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,
0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,
0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0xc0,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0xe0,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x80,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,
0xf8,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0x80,0xff,
0xff,0x07,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0x00,0xe8,0xff,0x00,
0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x0f,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0xff,0xbf,0x00,0x00,0x1a,0x00,0x00,0x00,
0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,
0x00,0x00,0x00,0x00,0x00,0xfc,0xf7,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
