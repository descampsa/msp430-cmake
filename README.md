This is a minimal cmake project to compile a msp430 program to MSP launchpad using msp430-gcc/mspdebug toolchain.
It is composed of a cmake toolchain file (generic-msp430-gcc.cmake), an example CMakeLists.txt demonstrates how to use it to compile and upload a simple application (led blink).
See also my AVR version, from which this code is derived (https://github.com/descampsa/avr-cmake)

Basic usage:

```sh
$ mkdir build
$ cd build
$ cmake ..
$ make example #compile example
$ make upload_example #upload to launchpad
```

The LEDs should blink alternately once per second if everything went right.

