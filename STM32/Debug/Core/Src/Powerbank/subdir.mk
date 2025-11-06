################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/Powerbank/Statemachine.cpp 

OBJS += \
./Core/Src/Powerbank/Statemachine.o 

CPP_DEPS += \
./Core/Src/Powerbank/Statemachine.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Powerbank/%.o Core/Src/Powerbank/%.su Core/Src/Powerbank/%.cyclo: ../Core/Src/Powerbank/%.cpp Core/Src/Powerbank/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G431xx -DUSE_FULL_LL_DRIVER -DUSBPD_PORT_COUNT=1 -D_RTOS -D_DRP -DUSBPDCORE_LIB_PD3_FULL -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../USBPD/App -I../USBPD/Target -I../USBPD -I../Middlewares/ST/STM32_USBPD_Library/Core/inc -I../Middlewares/ST/STM32_USBPD_Library/Devices/STM32G4XX/inc -I/Powerbank -I"C:/Users/Job/STM32CubeIDE/workspace_1.18.1/Powerbank_v1/Core/Src/Powerbank" -I../USB_Device/App -I../USB_Device/Target -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Powerbank

clean-Core-2f-Src-2f-Powerbank:
	-$(RM) ./Core/Src/Powerbank/Statemachine.cyclo ./Core/Src/Powerbank/Statemachine.d ./Core/Src/Powerbank/Statemachine.o ./Core/Src/Powerbank/Statemachine.su

.PHONY: clean-Core-2f-Src-2f-Powerbank

