/*
 * FP_Thread_1.cpp
 *
 *  Created on: Nov 15, 2019
 *      Author: michaeljeremy.olea
 */

#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "FP_Thread_1.h"   // Should include links to other project header files
#include "../../ENCM511_SpecificFiles/ENCM511_include/FrontPanel_LED_Switches.h"

#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include <stdio.h>

// TODO Adjust this parameter to match processor speed using emulator or simulator
#if defined(__ADSPBF609__)

#elif defined(__ADSPBF533__)

#else
	#error "Unknown processor"
#endif

extern "C" unsigned long int ReadCycles_ASM(void);
#define LED8_MASK 0x80

volatile char ID_FP_Thread_1 = 0;
void FP_Thread_1(void) {
	unsigned char newVal;
	unsigned char value = Read_GPIO_FrontPanelLEDS();
	if((value & LED8_MASK) == LED8_MASK) {
		Write_GPIO_FrontPanelLEDS(Read_GPIO_FrontPanelLEDS() & ~LED8_MASK); //0x7F
	} else {
		Write_GPIO_FrontPanelLEDS(Read_GPIO_FrontPanelLEDS() | LED8_MASK);
	}
}
