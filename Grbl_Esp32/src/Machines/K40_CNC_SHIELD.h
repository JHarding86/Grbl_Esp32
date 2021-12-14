#pragma once
// clang-format off

/*
    K40_CNC_SHIELD.h
    Part of Grbl_ESP32

    Pin assignments for the ESP32 Development Controller, v4.1 and later.
    https://github.com/bdring/Grbl_ESP32_Development_Controller
    https://www.tindie.com/products/33366583/grbl_esp32-cnc-development-board-v35/

    2021 - James Harding

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/

#define MACHINE_NAME            "K40_CNC_SHIELD"

#define X_STEP_PIN              GPIO_NUM_26
#define X_DIRECTION_PIN         GPIO_NUM_16

#define Y_STEP_PIN              GPIO_NUM_25
#define Y_DIRECTION_PIN         GPIO_NUM_27

#define Z_STEP_PIN              GPIO_NUM_17
#define Z_DIRECTION_PIN         GPIO_NUM_14

#define X_LIMIT_PIN             GPIO_NUM_13         // labeled X+
#define Y_LIMIT_PIN             GPIO_NUM_5          // labeled Y+
// #define Z_LIMIT_PIN          GPIO_NUM_23         // labeled Z+


// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN    GPIO_NUM_12

#define SPINDLE_TYPE            SpindleType::LASER
#define LASER_OUTPUT_PIN        GPIO_NUM_23         // labeled SpinDir
// #define SPINDLE_ENABLE_PIN   GPIO_NUM_19         // labeled SpinEn

// #define COOLANT_MIST_PIN     GPIO_NUM_21         // labeled Mist
#define COOLANT_FLOOD_PIN       GPIO_NUM_4          // labeled Hold, used to control external relay for blower fan, water pump, etc

//Setting default values for the K40!
#define DEFAULT_STEP_PULSE_MICROSECONDS 10      //$0
#define DEFAULT_STEPPER_IDLE_LOCK_TIME  255     //$1
#define DEFAULT_STEPPING_INVERT_MASK    0       //$2
#define DEFAULT_DIRECTION_INVERT_MASK   6       //$3
#define DEFAULT_INVERT_ST_ENABLE        0       //$4
#define DEFAULT_INVERT_LIMIT_PINS       1       //$5
#define DEFAULT_INVERT_PROBE_PIN        0       //$6

#define DEFAULT_STATUS_REPORT_MASK      1       //$10
#define DEFAULT_JUNCTION_DEVIATION      .01     //$11
#define DEFAULT_ARC_TOLERANCE           .002    //$12
#define DEFAULT_REPORT_INCHES           0       //$13

#define DEFAULT_SOFT_LIMIT_ENABLE       1       //$20
#define DEFAULT_HARD_LIMIT_ENABLE       0       //$21
#define DEFAULT_HOMING_ENABLE           1       //$22
#define DEFAULT_HOMING_DIR_MASK         3       //$23
#define DEFAULT_HOMING_FEED_RATE        300     //$24
#define DEFAULT_HOMING_SEEK_RATE        2000    //$25
#define DEFAULT_HOMING_DEBOUNCE_DELAY   100     //$26
#define DEFAULT_HOMING_PULLOFF          5       //$27
#define DEFAULT_HOMING_CYCLE_0          (bit(X_AXIS) | bit(Y_AXIS))
#define DEFAULT_HOMING_CYCLE_1          0

#define DEFAULT_SPINDLE_RPM_MAX         1050    //$30
#define DEFAULT_SPINDLE_RPM_MIN         0       //$31
#define DEFAULT_LASER_MODE              1       //$32
#define DEFAULT_SPINDLE_FREQ            1000    //$33 This setting never existed on my pervious grbl setups read more here: https://forum.lightburnsoftware.com/t/laser-frequency/2267/3 or here https://forum.lightburnsoftware.com/t/safe-maximum-pwm-with-co2-lasers/21067

#define DEFAULT_X_STEPS_PER_MM          314.0   //$100
#define DEFAULT_Y_STEPS_PER_MM          314.0   //$101
#define DEFAULT_Z_STEPS_PER_MM          6300.0  //$102

#define DEFAULT_X_MAX_RATE              7000.0  //$110
#define DEFAULT_Y_MAX_RATE              7000.0  //$111
#define DEFAULT_Z_MAX_RATE              400.0   //$112

#define DEFAULT_X_ACCELERATION          1000.0  //$120
#define DEFAULT_Y_ACCELERATION          1000.0  //$121
#define DEFAULT_Z_ACCELERATION          1000.0  //$122

#define DEFAULT_X_MAX_TRAVEL            333.0   //$130
#define DEFAULT_Y_MAX_TRAVEL            204.0   //$131
#define DEFAULT_Z_MAX_TRAVEL            100.0   //$132



/*
#define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // labeled Door,  needs external pullup
#define CONTROL_RESET_PIN       GPIO_NUM_34  // labeled Reset, needs external pullup
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_36  // labeled Hold,  needs external pullup
#define CONTROL_CYCLE_START_PIN GPIO_NUM_39  // labeled Start, needs external pullup
*/

