/* 
 * File:   ecu_init.c
 * Author:  Aya Ali
 *
 * Created on November 1, 2023, 6:32 PM
 */
#include "ecu_init.h"


keypad_t keypad1 = {
.keypad_rows[0].port= PORTC_INDEX,
.keypad_rows[0].pin = PIN0,
.keypad_rows[0].direction = Output,
.keypad_rows[0].logic = LOW,
.keypad_rows[1].port= PORTC_INDEX,
.keypad_rows[1].pin = PIN1,
.keypad_rows[1].direction = Output,
.keypad_rows[1].logic = LOW,
.keypad_rows[2].port= PORTC_INDEX,
.keypad_rows[2].pin = PIN2,
.keypad_rows[2].direction = Output,
.keypad_rows[2].logic = LOW,
.keypad_rows[3].port= PORTC_INDEX,
.keypad_rows[3].pin = PIN3,
.keypad_rows[3].direction = Output,
.keypad_rows[3].logic = LOW,

.keypad_columns[0].port= PORTC_INDEX,
.keypad_columns[0].pin = PIN4,
.keypad_columns[0].direction = Input,
.keypad_columns[0].logic = LOW,
.keypad_columns[1].port= PORTC_INDEX,
.keypad_columns[1].pin = PIN5,
.keypad_columns[1].direction = Input,
.keypad_columns[1].logic = LOW,
.keypad_columns[2].port= PORTC_INDEX,
.keypad_columns[2].pin = PIN6,
.keypad_columns[2].direction = Input,
.keypad_columns[2].logic = LOW,
.keypad_columns[3].port= PORTC_INDEX,
.keypad_columns[3].pin = PIN7,
.keypad_columns[3].direction = Input,
.keypad_columns[3].logic = LOW,
};
led_t led1= {
.Port_Name = PORTD_INDEX,
.pin = PIN0,
.led_statues = LED_OFF,
};
void ECU_Layer_initialize(void){
    Std_ReturnType ret = E_NOT_OK;
    ret = keypade_initialize(&keypad1);
    ret = led_initialize(&led1);
}