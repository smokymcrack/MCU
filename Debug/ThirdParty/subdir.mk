################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ThirdParty/Clock.c \
../ThirdParty/GPIO.c 

OBJS += \
./ThirdParty/Clock.o \
./ThirdParty/GPIO.o 

C_DEPS += \
./ThirdParty/Clock.d \
./ThirdParty/GPIO.d 


# Each subdirectory must supply rules for building sources it contributes
ThirdParty/%.o ThirdParty/%.su ThirdParty/%.cyclo: ../ThirdParty/%.c ThirdParty/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -I"C:/Users/georg/Documents/Microcontroller Udemy Class/Projects/MCU/000 - Setup/ThirdParty" -I"C:/Users/georg/Documents/Microcontroller Udemy Class/Projects/MCU/000 - Setup/Application" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-ThirdParty

clean-ThirdParty:
	-$(RM) ./ThirdParty/Clock.cyclo ./ThirdParty/Clock.d ./ThirdParty/Clock.o ./ThirdParty/Clock.su ./ThirdParty/GPIO.cyclo ./ThirdParty/GPIO.d ./ThirdParty/GPIO.o ./ThirdParty/GPIO.su

.PHONY: clean-ThirdParty

