/*
 * main.cpp
 *
 *  Created on: Aug 11, 2020
 *      Author: ryu
 */
#include "main.h"
#include "led.h"
#include "stm32f1xx_hal.h"
#include "solenoid_drive(sld).hpp"
#include "CanClass.hpp"

namespace {
	CanClass can;
	uint8_t receive_data1 = 0;
	uint8_t receive_data2 = 0;
	uint8_t send_data = 114;
}

extern "C" {
	void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)
	{
		can.receive(receive_data1, 0x100);

		if (receive_data1 == 1)
		{
			if (is_ES_opened() == true)
			{
				enable();
			}
		}
		else
		{
			disable();
			receive_data2 = 0;
		}

		can.receive(receive_data2, 0x101);

		SolenoidDrive(receive_data2);

		can.endit();//割り込み終了
	}
	void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
	{
		if (GPIO_Pin == ES_Pin)
		{
			if (is_ES_opened() == false)
			{
				disable();
				receive_data2 = 0;
			}
		}
	}
};

void main_cpp(void)
{
	can.init(0x100);
	GPIOB->BSRR = GPIO_BSRR_BS0;

	while(1)
	{
		led_on();

		led_process();

		//can.send(send_data,0x514);

		can.led_process();

	}

}






