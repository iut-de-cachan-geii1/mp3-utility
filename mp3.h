//  Copyright (c) 2024 Antoine Tran Tan
//  Copyright (c) 2020 MikroElektronika d.o.o.
//

#ifndef MP3_H
#define MP3_H

#include <cstdint>

// Numeros de registres

#define MP3_WRITE_CMD               0x02
#define MP3_READ_CMD                0x03
#define MP3_BASE_ADDR               0x00
#define MP3_MODE_ADDR               0x00
#define MP3_STATUS_ADDR             0x01
#define MP3_BASS_ADDR               0x02
#define MP3_CLOCKF_ADDR             0x03
#define MP3_DECODE_TIME_ADDR        0x04
#define MP3_AUDATA_ADDR             0x05
#define MP3_WRAM_ADDR               0x06
#define MP3_WRAMADDR_ADDR           0x07
#define MP3_HDAT0_ADDR              0x08
#define MP3_HDAT1_ADDR              0x09
#define MP3_AIADDR_ADDR             0x0A
#define MP3_VOL_ADDR                0x0B
#define MP3_AICTRL0_ADDR            0x0C
#define MP3_AICTRL1_ADDR            0x0D
#define MP3_AICTRL2_ADDR            0x0E
#define MP3_AICTRL3_ADDR            0x0F

// Error codes

#define MP3_OK                      0
#define MP3_ERROR                  -1

// Dummy value
#define MP3_DUMMY 0x00

extern const char gandalf_sax_mp3_compressed[660810];


#endif
