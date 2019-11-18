/*
 * REB_Thread_3.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: michaeljeremy.olea
 */
#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "REB_Thread_3.h"   // Should include links to other project header files
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

static int count = 0;
volatile bool SW2Pressed = false;

volatile char ID_REB_Thread_3 = 0;
void REB_Thread_3(void) {
	extern volatile bool stopRecording;
	if(stopRecording) {
		extern volatile unsigned short int switchValues[100];
		extern volatile int numRecorded;
		if(FP_SW2_Pressed()) {
			SW2Pressed = !SW2Pressed;
			printf("Switch 2 pressed\n");
		}
		if(SW2Pressed) {
			Write_GPIO_REB_Output(switchValues[count] << 4);
			if(count == numRecorded - 1) count = 0;
			else count++;
		}
	}

}

bool FP_SW2_Pressed() {
	if((Read_GPIO_FrontPanelSwitches() & 0x02) != 0x02) { //it is active low remember
		return true;
	} else {
		return false;
	}
}
