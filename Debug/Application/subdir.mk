################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/LED.c \
../Application/StateMachine.c 

OBJS += \
./Application/LED.o \
./Application/StateMachine.o 

C_DEPS += \
./Application/LED.d \
./Application/StateMachine.d 


# Each subdirectory must supply rules for building sources it contributes
Application/%.o Application/%.su Application/%.cyclo: ../Application/%.c Application/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -I"C:/Users/georg/Documents/Microcontroller Udemy Class/Projects/MCU/000 - Setup/ThirdParty" -I"C:/Users/georg/Documents/Microcontroller Udemy Class/Projects/MCU/000 - Setup/Application" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Application

clean-Application:
	-$(RM) ./Application/LED.cyclo ./Application/LED.d ./Application/LED.o ./Application/LED.su ./Application/StateMachine.cyclo ./Application/StateMachine.d ./Application/StateMachine.o ./Application/StateMachine.su

.PHONY: clean-Application

