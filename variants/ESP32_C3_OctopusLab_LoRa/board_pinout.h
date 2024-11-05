#ifndef BOARD_PINOUT_H_
#define BOARD_PINOUT_H_

    #define HAS_SX1268
    #define HAS_DISPLAY
    #define RADIO_HAS_XTAL

    #undef  OLED_SDA
    #undef  OLED_SCL
    #undef  OLED_RST

    #define OLED_SDA                0
    #define OLED_SCL                1
    #define OLED_RST                -1      // Reset pin # (or -1 if sharing Arduino reset pin)

    #define INTERNAL_LED_PIN        25      // Green Led
    #define BATTERY_PIN             35

    #define RADIO_SCLK_PIN          6
    #define RADIO_MISO_PIN          4
    #define RADIO_MOSI_PIN          7
    #define RADIO_CS_PIN            5
    #define RADIO_DIO1_PIN          3
    #define RADIO_RST_PIN           -1
    #define RADIO_BUSY_PIN          8
    
#endif