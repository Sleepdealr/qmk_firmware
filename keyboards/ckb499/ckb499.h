// Copyright 2022 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT( \
    K000, K010, K001, K011, K002, K012, K003, K013, K004, K014,  K005, K015, K006, K016, K007,        K017, K008, K018,  \
    K020, K030, K021, K031, K022, K032, K023, K033, K024, K034, K025, K035, K026, K036,               K037, K028, K038,  \
    K040, K050, K041, K051, K042, K052, K043, K053, K044, K054, K045, K055, K046, K056,                                  \
    K060, K070, K061, K071, K062, K072, K063, K073, K064, K074, K065, K075,  K076,                                       \
    K080, K090, K081, K091, K082, K092, K083, K093, K084, K094, K085,             K096,                     K088,        \
    K100, K110, K101,                   K103,                   K115, K106, K116,   K107,             K117, K108, K118   \
  ) { \
    { K000,   K001,   K002,   K003,   K004,   K005,   K006,  K007,   K008  }, \
    { K010,   K011,   K012,   K013,   K014,   K015,   K016,  K017,   K018  }, \
    { K020,   K021,   K022,   K023,   K024,   K025,   K026,  KC_NO,  K028  }, \
    { K030,   K031,   K032,   K033,   K034,   K035,   K036,  K037,   K038  }, \
    { K040,   K041,   K042,   K043,   K044,   K045,   K046,  KC_NO,  KC_NO }, \
    { K050,   K051,   K052,   K053,   K054,   K055,   K056,  KC_NO,  KC_NO }, \
    { K060,   K061,   K062,   K063,   K064,   K065,   KC_NO, KC_NO,  KC_NO }, \
    { K070,   K071,   K072,   K073,   K074,   K075,   K076,  KC_NO,  KC_NO }, \
    { K080,   K081,   K082,   K083,   K084,   K085,   KC_NO, KC_NO,  K088  }, \
    { K090,   K091,   K092,   K093,   K094,   KC_NO,  K096,  KC_NO,  KC_NO }, \
    { K100,   K101,   KC_NO,  K103,   KC_NO,  KC_NO,  K106,  K107,   K108  }, \
    { K110,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  K115,   K116,  K117,   K118  }  \
  }
