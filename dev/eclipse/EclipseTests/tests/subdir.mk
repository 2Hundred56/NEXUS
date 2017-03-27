################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../tests/utAllTests.cpp 

OBJS += \
./tests/utAllTests.o 

CPP_DEPS += \
./tests/utAllTests.d 


# Each subdirectory must supply rules for building sources it contributes
tests/%.o: ../tests/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/sunlightiv/Drive/Data/Workspaces/Github/NEXUS/dev/eclipse/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


