################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../sourceFile/manClient.cpp 

OBJS += \
./sourceFile/manClient.o 

CPP_DEPS += \
./sourceFile/manClient.d 


# Each subdirectory must supply rules for building sources it contributes
sourceFile/%.o: ../sourceFile/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


