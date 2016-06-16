# Template for a MSP430 project

cmake_minimum_required(VERSION 2.8)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/generic-msp430-gcc.cmake")

# Name your project
project(EXAMPLE)

#device dependent config, here for launchpad
set(MSP430_MCU msp430g2553)
set(MSP430_MCU_FREQ 1000000UL)

msp430_add_executable(example example.c)


