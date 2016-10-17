################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../sourcFile/mainClient.cpp 

OBJS += \
./sourcFile/mainClient.o 

CPP_DEPS += \
./sourcFile/mainClient.d 


# Each subdirectory must supply rules for building sources it contributes
sourcFile/%.o: ../sourcFile/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


