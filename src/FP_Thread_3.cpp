/*
 * FP_Thread_3.cpp
 *
 *  Created on: Nov 15, 2019
 *      Author: michaeljeremy.olea
 */

#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "FP_Thread_3.h"   // Should include links to other project header files
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
#define LED1_MASK 0x1
#define LED2_MASK 0x2

volatile char ID_FP_Thread_3 = 0;
void FP_Thread_3(void) {
	static int runCounter3 = 0;

	if(runCounter3 == 0) {
		Write_GPIO_FrontPanelLEDS(Read_GPIO_FrontPanelLEDS() & (~LED1_MASK & ~LED2_MASK)); //0xFC
		runCounter3 = 1;
	} else if(runCounter3 == 1) {
		Write_GPIO_FrontPanelLEDS(Read_GPIO_FrontPanelLEDS() | LED1_MASK);
		runCounter3 = 2;
	} else if(runCounter3 == 2) {
		Write_GPIO_FrontPanelLEDS((Read_GPIO_FrontPanelLEDS() & ~LED1_MASK) | LED2_MASK); //0xFE
		runCounter3 = 3;
	} else if(runCounter3 == 3) {
		Write_GPIO_FrontPanelLEDS(Read_GPIO_FrontPanelLEDS() | LED1_MASK);
		runCounter3 = 0;
	}
}
