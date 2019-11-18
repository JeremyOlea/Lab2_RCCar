/*************************************************************************************
* AUTO-GENERATED COMMENT - DO NOT MODIFY 
* Author: michaeljeremy.olea 
* Date: Fri 2019/11/15 at 12:31:35 PM 
* File Type: TTCOS Main File
*************************************************************************************/

// This is an example TT_COS main( ) function with threads.
// Use this as a template for your own TT_COS main( ) for the various Threads

#include "uTTCOS_Lab2_BF609_Core0_uTTCOSg2017_main.h"

// TODO -- Update this code to use CORETIMER interrupts to allow slow uTTCOS in BF533 simulator
// TODO Just these values so that 100 TICS tacks about 1 second
#if defined(__ADSPBF609__)
#define  TIC_CONTROL_VALUE ((unsigned long int) 4800000)		// BF609 EMULATOR
#define TICS_PER_SECOND 	100
#define ONE_SECOND 			TICS_PER_SECOND		// If TICS_CONTROL_VALUE Adjusted correctly
#define RUN_ONCE			0
#define NO_DELAY			0
#else
#error "Unknown ADSP or ARM processor"
#endif

void main(void) {
	// Make maxNumberThreads at least 5 larger than the 
	//            number of threads you plan to add
	int numBackgroundThreads = 5;
	int numberYourThreads = 5;
	int maxNumberThreads = numBackgroundThreads + numberYourThreads;  
	Init_GPIO_FrontPanelLEDS();
	Init_GPIO_FrontPanelSwitches();
	Init_GPIO_REB_Output();
	Init_GPIO_REB_Input();
	Custom_uTTCOS_OS_Init(TIC_CONTROL_VALUE);  // Need to update to handle coretimer interrupts

	//-------------THREADS-----------------//
//	extern volatile char ID_FP_Thread_1;
//	ID_FP_Thread_1 = uTTCOSg_AddThread(FP_Thread_1, NO_DELAY, 0.25 * ONE_SECOND);
//
//	extern volatile char ID_FP_Thread_2;
//	ID_FP_Thread_2 = uTTCOSg_AddThread(FP_Thread_2, NO_DELAY, 0.33 * ONE_SECOND);
//
//	extern volatile char ID_FP_Thread_3;
//	ID_FP_Thread_3 = uTTCOSg_AddThread(FP_Thread_3, NO_DELAY, 0.5 * ONE_SECOND);
//
//	extern volatile char ID_FP_Thread_4;
//	ID_FP_Thread_4 = uTTCOSg_AddThread(FP_Thread_4, NO_DELAY, ONE_SECOND);
//
//	extern volatile char ID_FP_Thread_5;
//	ID_FP_Thread_5 = uTTCOSg_AddThread(FP_Thread_5, NO_DELAY, 0.1 * ONE_SECOND);

	extern volatile char ID_REB_Thread_1;
	ID_REB_Thread_1 = uTTCOSg_AddThread(REB_Thread_1, NO_DELAY, ONE_SECOND);

	extern volatile char ID_REB_Thread_2;
	ID_REB_Thread_2 = uTTCOSg_AddThread(REB_Thread_2, NO_DELAY, 0.1 * ONE_SECOND);

	extern volatile char ID_REB_Thread_3;
	ID_REB_Thread_3 = uTTCOSg_AddThread(REB_Thread_3, NO_DELAY, 0.1 * ONE_SECOND);

#warning "You will need to activate the next line to start the uTTCOS Clock scheduler
	uTTCOSg_Start_CoreTimer_Scheduler(maxNumberThreads);   //  Start the scheduler timer
				// Execution time of TT_COS_Dispatch( ) and TT_COS_Update( ) improved by specifiying maxNumberTasks
	while (1) {

		// Wait, in low power mode, for an interrupt
		// The interrupt service routine calls TTCOS_Update( )
		// uTTCOSg_GoToSleep( );                // Need to update to handle coretimer interrupts
		Idle_WaitForInterrupts_ASM( );

		// Run all the threads in the system according
		// to whether their delays have expired
		uTTCOSg_DispatchThreads( );
	}
}

