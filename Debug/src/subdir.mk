################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../src/Idle_WaitForInterrupts_ASM.asm \
../src/ReadCycles_ASM.asm 

CPP_SRCS += \
../src/FP_Thread_1.cpp \
../src/FP_Thread_2.cpp \
../src/FP_Thread_3.cpp \
../src/FP_Thread_4.cpp \
../src/FP_Thread_5.cpp \
../src/REB_Thread_1.cpp \
../src/REB_Thread_2.cpp \
../src/REB_Thread_3.cpp \
../src/faultyLED1_Thread.cpp \
../src/uTTCOS_Lab2_BF609_Core0_uTTCOSg2017_main.cpp 

SRC_OBJS += \
./src/FP_Thread_1.doj \
./src/FP_Thread_2.doj \
./src/FP_Thread_3.doj \
./src/FP_Thread_4.doj \
./src/FP_Thread_5.doj \
./src/Idle_WaitForInterrupts_ASM.doj \
./src/REB_Thread_1.doj \
./src/REB_Thread_2.doj \
./src/REB_Thread_3.doj \
./src/ReadCycles_ASM.doj \
./src/faultyLED1_Thread.doj \
./src/uTTCOS_Lab2_BF609_Core0_uTTCOSg2017_main.doj 

ASM_DEPS += \
./src/Idle_WaitForInterrupts_ASM.d \
./src/ReadCycles_ASM.d 

CPP_DEPS += \
./src/FP_Thread_1.d \
./src/FP_Thread_2.d \
./src/FP_Thread_3.d \
./src/FP_Thread_4.d \
./src/FP_Thread_5.d \
./src/REB_Thread_1.d \
./src/REB_Thread_2.d \
./src/REB_Thread_3.d \
./src/faultyLED1_Thread.d \
./src/uTTCOS_Lab2_BF609_Core0_uTTCOSg2017_main.d 


# Each subdirectory must supply rules for building sources it contributes
src/FP_Thread_1.doj: ../src/FP_Thread_1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FP_Thread_1.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FP_Thread_2.doj: ../src/FP_Thread_2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FP_Thread_2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FP_Thread_3.doj: ../src/FP_Thread_3.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FP_Thread_3.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FP_Thread_4.doj: ../src/FP_Thread_4.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FP_Thread_4.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FP_Thread_5.doj: ../src/FP_Thread_5.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/FP_Thread_5.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Idle_WaitForInterrupts_ASM.doj: ../src/Idle_WaitForInterrupts_ASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-8c375c1a8dbe4748fce59cacb166ebd8.txt -gnu-style-dependencies -MM -Mo "src/Idle_WaitForInterrupts_ASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/REB_Thread_1.doj: ../src/REB_Thread_1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/REB_Thread_1.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/REB_Thread_2.doj: ../src/REB_Thread_2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/REB_Thread_2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/REB_Thread_3.doj: ../src/REB_Thread_3.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/REB_Thread_3.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ReadCycles_ASM.doj: ../src/ReadCycles_ASM.asm
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin Assembler'
	easmblkfn -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-8c375c1a8dbe4748fce59cacb166ebd8.txt -gnu-style-dependencies -MM -Mo "src/ReadCycles_ASM.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/faultyLED1_Thread.doj: ../src/faultyLED1_Thread.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/faultyLED1_Thread.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/uTTCOS_Lab2_BF609_Core0_uTTCOSg2017_main.doj: ../src/uTTCOS_Lab2_BF609_Core0_uTTCOSg2017_main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore Blackfin C/C++ Compiler'
	ccblkfn -c -file-attr ProjectName="uTTCOS_Lab2_BF609_Core0" -proc ADSP-BF609 -flags-compiler --no_wrap_diagnostics -si-revision any -g -DCORE0 -D_DEBUG -DADI_MCAPI @includes-36073fe399cb0702d52c402a78bcf412.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -decls-strong -cplbs -gnu-style-dependencies -MD -Mo "src/uTTCOS_Lab2_BF609_Core0_uTTCOSg2017_main.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


