/*
 * FP_Thread_5.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: michaeljeremy.olea
 */
#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "FP_Thread_5.h"   // Should include links to other project header files
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
#define BITS_3_TO_6 0xC3
#define SW1_MASK 0x01; //why doesnt this work???

static float time = 1;
volatile bool execute = true;
volatile int waitTime = 0;

volatile char ID_FP_Thread_5 = 0;
void FP_Thread_5(void) {
//	printf("%.3lf\n", time);
	if(FP_SW1_Pressed()) {
		if(time > 1 && time < 2) {
			execute = true;
			if(waitTime > 1) {
				printf("Increasing Display Rate\n");
				waitTime--;
			} else {
				printf("There is already no Delay!\n");
			}
		} else if(time > 3 && time < 4) {
			printf("Decreasing Display Rate\n");
			execute = true;
			waitTime++;
		} else {
			printf("PAUSING THREAD 4\n");
			execute = false;
		}
	}

	if(time >= 4) time = 1;
	else time += 0.1;
}

bool FP_SW1_Pressed() {
	if((Read_GPIO_FrontPanelSwitches() & 0x01) != 0x01) { //it is active low remember
		return true;
	} else {
		return false;
	}
}
