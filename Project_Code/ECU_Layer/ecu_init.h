/* 
 * File:   ecu_init.h
 * Author:  Aya Ali
 *
 * Created on November 1, 2023, 6:32 PM
 */

#ifndef ECU_INIT_H
#define	ECU_INIT_H

#include "LED/ecu_led.h"
#include "Button/ecu_button.h"
#include "Relay/ecu_relay.h"
#include "Motor/ecu_dc_motor.h"
#include "7_Segment/ecu_7segment.h"
#include "Keypad/ecu_keypad.h"


extern keypad_t keypad1 ;
extern led_t led1;
void ECU_Layer_initialize(void);

#endif	/* ECU_INIT_H */

