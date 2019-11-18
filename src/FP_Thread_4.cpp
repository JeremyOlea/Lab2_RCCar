/*
 * FP_Thread_4.cpp
 *
 *  Created on: Nov 15, 2019
 *      Author: michaeljeremy.olea
 */

#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "FP_Thread_4.h"   // Should include links to other project header files
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
#define PROCESSOR_CYCLES_PER_SECOND 480000000

static int timeWaited = 0;

volatile char ID_FP_Thread_4 = 0;
void FP_Thread_4(void) {
	extern volatile bool execute;
	extern volatile int waitTime;
	if(execute){
		unsigned char initials[13] = {0xE1, 0x81, 0xFF, 0x01, 0x00, 0xC0, 0x00, 0xFF, 0x81, 0xFF, 0x00, 0xC0};
		static int count = 0;
		long long timeStart = ReadCycles_ASM();
		if(timeWaited >= waitTime) {
			Write_GPIO_FrontPanelLEDS((Read_GPIO_FrontPanelLEDS() & BITS_3_TO_6) | (initials[count] & ~BITS_3_TO_6));
			timeWaited = 0;
		} else {
			timeWaited++;
		}

		if(count == 12) count = 0;
		else count++;
	}
}
