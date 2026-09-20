//---------------------------------------------------------------------------

#pragma once
#include "encoder_pins.h"
#include "pair_flash_layout.h"

//---------------------------------------------------------------------------

#define JAVELIN_USE_EMBEDDED_STENO 0
#define JAVELIN_USE_USER_DICTIONARY 0
#define JAVELIN_USB_MILLIAMPS 500

#define JAVELIN_SPLIT 1
#define JAVELIN_SPLIT_PIO_CYCLES 20
#define JAVELIN_SPLIT_TX_PIN 1
#define JAVELIN_SPLIT_RX_PIN 1
#define JAVELIN_SPLIT_IS_MASTER 0
#define JAVELIN_SPLIT_IS_LEFT 0
// #define JAVELIN_SPLIT_SIDE_PIN xx
#define JAVELIN_SPLIT_TX_RX_BUFFER_SIZE 512

#define JAVELIN_BUTTON_MATRIX 0
#define JAVELIN_BUTTON_PINS 1

// clang-format off
constexpr uint8_t BUTTON_PINS[] = {
   0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,       /**/     20, 22, 26, 27, 28, 29,
   0x7f, 0x7f, 0x7f, 0x7f, 0x7f,             /**/          7,  8,  9, 21, 23,
                                 0x7f, 0x7f,       5,  6,  
}
// clang-format off
//
// Button indexes
//  0   1   2   3   4   5 |  6   7   8   9  10  11  
// 12  13  14  15  16     |     17  18  19  20  21  
//                 22  23 | 24  25
//

// clang-format on

const size_t BUTTON_COUNT = 26;

const char *const MANUFACTURER_NAME = "ak66666";
const char *const PRODUCT_NAME = "ThumbsUp! v12 (Javelin)";
const int VENDOR_ID = 0x5361;
// const int PRODUCT_ID = 0x0002;

//---------------------------------------------------------------------------
