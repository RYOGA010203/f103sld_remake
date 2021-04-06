
#include "solenoid_drive(sld).hpp"

void SolenoidDrive(uint8_t order) {
	if ( is_enabled && ( is_ES_opened() )  ) {
		uint32_t cmda = 0;
		uint32_t cmdb = 0;
		cmdb |= ((0b00111111) & (order)) << 10; //set0~5
		cmdb |= ((0b1111110000000000 & (~cmdb)) << 16);
		cmda |= ((0b01000000) & (order)) << 2; //set6
		cmda |= ((0b0000000100000000 & (~cmda)) << 16);
		GPIOB->BSRR = cmdb;
		GPIOA->BSRR = cmda;
	}
}

void enable(void) {
	GPIOB->BSRR = GPIO_BSRR_BR0; //off red led;
	GPIOA->BSRR = GPIO_BSRR_BS7; //on yellow led;
	is_enabled = true;
}

void disable(void) {
	GPIOB->BSRR = GPIO_BSRR_BS0; //on red led;
	GPIOA->BSRR = GPIO_BSRR_BR7; //off yellow led;
	GPIOB->BRR = 0b1111110000000000; //all reset;
	GPIOA->BRR = 0b0000000100000000;
	is_enabled = false;
}

bool is_ES_opened(void)
{
	if ((GPIOC->IDR & GPIO_IDR_IDR13))
	{
		return true;
	}
	else
	{
		return false;
	}
}
