/*************************************************************************************
* AUTO-GENERATED COMMENT - DO NOT MODIFY 
* Author: michaeljeremy.olea
* Date: Fri 2019/11/15 at 12:31:35 PM
* File Type: uTTCOS Task Header File
*************************************************************************************/

#ifndef UTTCOS_LAB2_BF609_CORE0_UTTCOSG2017_H
#define UTTCOS_LAB2_BF609_CORE0_UTTCOSG2017_H

#include <uTTCOSg2017/uTTCOSg.h>
#include <GPIO2017/ADSP_GPIO_interface.h>
#include "faultyLED1_Thread.h"
#include "FP_Thread_1.h"
#include "FP_Thread_2.h"
#include "FP_Thread_3.h"
#include "FP_Thread_4.h"
#include "FP_Thread_5.h"
#include "REB_Thread_1.h"
#include "REB_Thread_2.h"
#include "REB_Thread_3.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/FrontPanel_LED_Switches.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_GPIO_Input_Library.h"
#include "../../ENCM511_SpecificFiles/ENCM511_include/REB_GPIO_Output_Library.h"
// extern "C" void BlackfinBF533_uTTCOSg_Audio_Rx_Tx_Task(void); 
extern "C" void SHARC21469_uTTCOSg_Audio_Rx_Tx_Task(void);
extern "C" void ADSP_SC589_uTTCOSg_Audio_Rx_Tx_Task(void);

// TODO -- Once you have demonstrated the idea of uTTCOS working with print statements
// Comment out the following include statement
// DON'T USE PRINT STATEMENT INSIDE uTTCOS as it is a real time system and
// print statements run on the HIGH priority emulator interrupt and disrupt real time operations

#include <stdio.h>

void Custom_uTTCOS_OS_Init(unsigned long int);
extern "C" void Idle_WaitForInterrupts_ASM(void);
void uTTCOSg_Start_CoreTimer_Scheduler(unsigned int maxNumberThreads);

#endif
