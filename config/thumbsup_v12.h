//---------------------------------------------------------------------------

#pragma once
#include "encoder_pins.h"
#include "main_flash_layout.h"

//---------------------------------------------------------------------------

struct StenoConfigBlock;
struct StenoOrthography;
struct StenoDictionaryCollection;

//---------------------------------------------------------------------------

#define JAVELIN_USE_EMBEDDED_STENO 1
#define JAVELIN_USE_USER_DICTIONARY 1
#define JAVELIN_USB_MILLIAMPS 500


#define JAVELIN_SPLIT 1
#define JAVELIN_SPLIT_PIO_CYCLES 20
#define JAVELIN_SPLIT_TX_PIN 1
#define JAVELIN_SPLIT_RX_PIN 1
#define JAVELIN_SPLIT_IS_MASTER 1
#define JAVELIN_SPLIT_IS_LEFT 1
// #define JAVELIN_SPLIT_SIDE_PIN xx
#define JAVELIN_SPLIT_TX_RX_BUFFER_SIZE 512

#define JAVELIN_BUTTON_MATRIX 0
#define JAVELIN_BUTTON_PINS 1

// clang-format off
constexpr uint8_t BUTTON_PINS[] = {
   29, 28, 27, 26, 22,  20,    /**/  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
   23, 21,  9,  8,  7,   6, 5, /**/  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
};

// clang-format off
//
// Button indexes
//  0   1   2   3   4   5 |  6   7   8   9  10  11  
// 12  13  14  15  16     |     17  18  19  20  21  
//                 22  23 | 24  25
//

// clang-format on

#define JAVELIN_SCRIPT_CONFIGURATION                                           \
  R"({"name":"ThumbsUpV12","layout":[{"x":0,"y":0},{"x":1,"y":0},{"x":2,"y":0},{"x":3,"y":0},{"x":4,"y":0},{"x":5,"y":0},{"x":6,"y":0},{"x":8,"y":0},{"x":9,"y":0},{"x":10,"y":0},{"x":11,"y":0},{"x":0,"y":1},{"x":1,"y":1},{"x":2,"y":1},{"x":3,"y":1},{"x":4,"y":1},{"x":7,"y":1},{"x":8,"y":1},{"x":9,"y":1},{"x":10,"y":1},{"x":11,"y":1},{"x":4,"y":2},{"x":5,"y":2},{"x":6,"y":2},{"x":7,"y":2}]})"


//crkbd4:  R"({"name":"ThumbsUpV12","layout":[{"x":0,"y":0.3},{"x":1,"y":0.3},{"x":2,"y":0.1},{"x":3,"y":0},{"x":4,"y":0.1},{"x":5,"y":0.2},{"x":6,"y":0.7},{"x":8,"y":0.7},{"x":9,"y":0.2},{"x":10,"y":0.1},{"x":11,"y":0},{"x":12,"y":0.1},{"x":13,"y":0.3},{"x":14,"y":0.3},{"x":0,"y":1.3},{"x":1,"y":1.3},{"x":2,"y":1.1},{"x":3,"y":1},{"x":4,"y":1.1},{"x":5,"y":1.2},{"x":6,"y":1.7},{"x":8,"y":1.7},{"x":9,"y":1.2},{"x":10,"y":1.1},{"x":11,"y":1},{"x":12,"y":1.1},{"x":13,"y":1.3},{"x":14,"y":1.3},{"x":0,"y":2.3},{"x":1,"y":2.3},{"x":2,"y":2.1},{"x":3,"y":2},{"x":4,"y":2.1},{"x":5,"y":2.2},{"x":9,"y":2.2},{"x":10,"y":2.1},{"x":11,"y":2},{"x":12,"y":2.1},{"x":13,"y":2.3},{"x":14,"y":2.3},{"x":3.5,"y":3.4},{"x":4.7,"y":3.58,"r":0.26},{"x":5.95,"y":3.6,"w":1,"h":1.5,"r":0.52},{"x":8.05,"y":3.6,"w":1,"h":1.5,"r":-0.52},{"x":9.3,"y":3.58,"r":-0.26},{"x":10.5,"y":3.4}]})"


const size_t BUTTON_COUNT = 26;


const char *const MANUFACTURER_NAME = "ak66666";
const char *const PRODUCT_NAME = "ThumbsUp! v12 (Javelin)";
const int VENDOR_ID = 0x5361;
// const int PRODUCT_ID = 0x0001;

//---------------------------------------------------------------------------
