#ifndef __BSP_INIT_H
#define __BSP_INIT_H

#include "main.h"

#define turn_on_red_led() HAL_GPIO_WritePin(led_r_GPIO_Port,led_r_Pin,GPIO_PIN_RESET) 
#define turn_on_green_led() HAL_GPIO_WritePin(led_g_GPIO_Port,led_g_Pin,GPIO_PIN_RESET) 
#define turn_on_blue_led() HAL_GPIO_WritePin(led_b_GPIO_Port,led_b_Pin,GPIO_PIN_RESET) 
 
#define turn_off_red_led() HAL_GPIO_WritePin(led_r_GPIO_Port,led_r_Pin,GPIO_PIN_SET) 
#define turn_off_green_led() HAL_GPIO_WritePin(led_g_GPIO_Port,led_g_Pin,GPIO_PIN_SET) 
#define turn_off_blue_led() HAL_GPIO_WritePin(led_b_GPIO_Port,led_b_Pin,GPIO_PIN_SET) 

#define turn_on_motor() HAL_GPIO_WritePin(motor_power_GPIO_Port,motor_power_Pin,GPIO_PIN_SET) 
#define turn_off_motor() HAL_GPIO_WritePin(motor_power_GPIO_Port,motor_power_Pin,GPIO_PIN_RESET) 

#define set_Uart1_TX_mode() HAL_GPIO_WritePin(dir1_485_GPIO_Port,dir1_485_Pin,GPIO_PIN_SET);
#define set_Uart6_TX_mode() HAL_GPIO_WritePin(dir2_485_GPIO_Port,dir2_485_Pin,GPIO_PIN_SET);
#define set_Uart1_RX_mode() HAL_GPIO_WritePin(dir1_485_GPIO_Port,dir1_485_Pin,GPIO_PIN_RESET);
#define set_Uart6_RX_mode() HAL_GPIO_WritePin(dir2_485_GPIO_Port,dir2_485_Pin,GPIO_PIN_RESET);

void startup_blink(void);
void bsp_device_init(void);






#endif



