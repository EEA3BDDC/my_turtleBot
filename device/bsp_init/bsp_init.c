#include "bsp_init.h"

#include "beep.h"
//#include "ros_main.h"
#include "usart.h"

//#define EN_DM_motor
//#define EN_ros


void startup_blink(void){
	uint8_t i;
	for(i=0;i<10;i++){
		HAL_GPIO_TogglePin(led_b_GPIO_Port,led_b_Pin);
		HAL_Delay(50);
	}
}

void bsp_device_init(void){

//	while(BMI088_init());
	turn_off_motor();
	
	turn_off_red_led();
	turn_off_green_led();
	turn_off_blue_led();
	
	set_Uart1_TX_mode();
	set_Uart6_TX_mode();
	
#ifdef EN_ros
		setup();//ros communicate sys
#endif
	
	startup_blink();		
	startup_sing();	//init ALL ok
}


