/*
 * REB_Thread_2.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: michaeljeremy.olea
 */
#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "REB_Thread_2.h"   // Should include links to other project header files
#include "uTTCOS_Lab2_BF609_Core0_uTTCOSg2017_main.h"

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

volatile int numRecorded = 0;
volatile unsigned short int switchValues[100];
static bool SW5Pressed = false;
volatile bool stopRecording = false;

volatile char ID_REB_Thread_2 = 0;
void REB_Thread_2(void) {
	if(!stopRecording) {
		if(FP_SW5_Pressed()) {
			printf("SW5 Pressed\n");
			SW5Pressed = true;
		} else if(SW5Pressed && !FP_SW5_Pressed()) {
			if(FP_SW4_Pressed()) {
				printf("Recorded %d inputs\n", numRecorded);
				stopRecording = true;
			} else {
				unsigned short int value = Read_GPIO_REB_Input();
				printf("0x%x is recorded\n", value);
				switchValues[numRecorded] = value;
				numRecorded++;
			}
			SW5Pressed = false;
		}
	}
}

bool FP_SW5_Pressed() {
	if((Read_GPIO_FrontPanelSwitches() & 0x10) != 0x10) { //it is active low remember
		return true;
	} else {
		return false;
	}
}

bool FP_SW4_Pressed() {
	if((Read_GPIO_FrontPanelSwitches() & 0x08) != 0x08) { //it is active low remember
		return true;
	} else {
		return false;
	}
}
