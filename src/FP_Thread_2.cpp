/*
 * FP_Thread_2.cpp
 *
 *  Created on: Nov 15, 2019
 *      Author: michaeljeremy.olea
 */

#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "FP_Thread_2.h"   // Should include links to other project header files
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
#define LED7_MASK 0x40

volatile char ID_FP_Thread_2 = 0;
void FP_Thread_2(void) {
	static int runCounter = 0;

	if(runCounter == 0) {
		Write_GPIO_FrontPanelLEDS(Read_GPIO_FrontPanelLEDS() | LED7_MASK);
		runCounter = 1;
	} else if(runCounter == 1) {
		runCounter = 2;
	} else if(runCounter == 2) {
		Write_GPIO_FrontPanelLEDS(Read_GPIO_FrontPanelLEDS() & ~LED7_MASK); //0xBF
		runCounter = 0;
	}
}
