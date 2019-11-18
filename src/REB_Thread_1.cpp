/*
 * REB_Thread_1.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: michaeljeremy.olea
 */

#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>

#include "REB_Thread_1.h"   // Should include links to other project header files
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
static unsigned char numbers[16] = {0x0, 0x1, 0x2, 0x3, 0x4,0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};

volatile char ID_REB_Thread_1 = 0;
void REB_Thread_1(void) {
	extern volatile bool SW2Pressed;
	if(!SW2Pressed) {
		Write_GPIO_REB_Output(numbers[count] << 12);
		if(count == 15) count = 0;
		else count++;
	}
}

