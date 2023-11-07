/* 
 * File:   application.c
 * Author: AyaAli
 * Created on September 22, 2023, 10:24 AM
 */
#include "application.h"
 

uint_8 keypad_value = ZERO_INIT;
int main() {
    
Std_ReturnType ret = E_NOT_OK;
application_initialize();
while(1){
    
 keypade_get_value(&keypad1, &keypad_value );
 if(keypad_value == '7'){
     ret = led_turn_on(&led1);
 }
 else if (keypad_value == '8'){
    ret = led_turn_off(&led1);
 }
 else{}
    

}
  return (EXIT_SUCCESS);
}
void application_initialize(void){
   ECU_Layer_initialize();
  
}