################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DataLogger.cpp \
../src/Main.cpp \
../src/Node.cpp \
../src/RoadState.cpp \
../src/SignalController.cpp \
../src/SignalTimer.cpp 

OBJS += \
./src/DataLogger.o \
./src/Main.o \
./src/Node.o \
./src/RoadState.o \
./src/SignalController.o \
./src/SignalTimer.o 

CPP_DEPS += \
./src/DataLogger.d \
./src/Main.d \
./src/Node.d \
./src/RoadState.d \
./src/SignalController.d \
./src/SignalTimer.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


