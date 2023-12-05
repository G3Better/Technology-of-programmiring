################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Administration.cpp \
../src/Employee.cpp \
../src/Engineer.cpp \
../src/HR.cpp \
../src/Worker.cpp \
../src/laba_4.cpp 

CPP_DEPS += \
./src/Administration.d \
./src/Employee.d \
./src/Engineer.d \
./src/HR.d \
./src/Worker.d \
./src/laba_4.d 

OBJS += \
./src/Administration.o \
./src/Employee.o \
./src/Engineer.o \
./src/HR.o \
./src/Worker.o \
./src/laba_4.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Administration.d ./src/Administration.o ./src/Employee.d ./src/Employee.o ./src/Engineer.d ./src/Engineer.o ./src/HR.d ./src/HR.o ./src/Worker.d ./src/Worker.o ./src/laba_4.d ./src/laba_4.o

.PHONY: clean-src

