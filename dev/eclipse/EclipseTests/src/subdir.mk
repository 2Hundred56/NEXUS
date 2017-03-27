################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BasicPhysics.cpp \
../src/Component.cpp \
../src/Drawable.cpp \
../src/Invisible.cpp \
../src/Object.cpp \
../src/Physics.cpp \
../src/Resources.cpp \
../src/Vector.cpp \
../src/World.cpp 

OBJS += \
./src/BasicPhysics.o \
./src/Component.o \
./src/Drawable.o \
./src/Invisible.o \
./src/Object.o \
./src/Physics.o \
./src/Resources.o \
./src/Vector.o \
./src/World.o 

CPP_DEPS += \
./src/BasicPhysics.d \
./src/Component.d \
./src/Drawable.d \
./src/Invisible.d \
./src/Object.d \
./src/Physics.d \
./src/Resources.d \
./src/Vector.d \
./src/World.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


