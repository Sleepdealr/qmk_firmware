#include "type30.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
        {24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35},
        {23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12},
        {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10, 11}
    }, {
        {224,0  }, {204,0  }, {183,0  }, {163,0  }, {143,0  }, {122,0  }, {102,0  }, { 81,0  }, { 61,0  }, { 41,0  },
        { 20,0  }, {  0,0  }, {  0,32 }, { 20,32 }, { 41,32 }, { 61,32 }, { 81,32 }, {102,32 }, {122,32 }, {143,32 },
        {163,32 }, {183,32 }, {204,32 }, {224,32 }, {224,64 }, {204,64 }, {183,64 }, {163,64 }, {143,64 }, {122,64 },
        {102,64 }, { 81,64 }, { 61,64 }, { 41,64 }, { 20,64 }, {  0,64 }
    }, {
        4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,4,4,4,4
    } };
#endif