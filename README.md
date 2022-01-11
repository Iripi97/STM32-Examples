# STM32-Examples
Some simple programs to help familiarize the user with the STM32F429 Discovery Board (Revision 1/ Green PCB)


***Knight Rider Code***

Materials Required:

(8x) Red LED

(8x) 200 Ohm Resistors

Pins Used on STM32:

GND, PA_0 (USER_BUTTON), PD_12, PD_13, PD_14, PD_15, PE_9, PE_11, PE_13, PE_14

***Note: Other pins can be used, check the STM32 pinout and look for pins that have PWM capabilities.***

To use the MBED version, simply open the MBED online compiler and use the code provided.

To use the Linux version, you will need ST-LINK (v1.7.0 used here) which can be downloaded and used with the following commands:
```
git clone https://github.com/stlink-org/stlink/releases
make
export PATH=$PATH:your/path/to/stlink/tools
```
***Note: make should be run in the newly downloaded STLINK directory***

The ARM compiler will also be required (this works for Ubuntu):
```
sudo apt install gcc-arm-none-eabi
```
If not using Ubuntu the compiler can be downloaded at:
https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads

If the user obtains the ARM toolchain this way, do not forget to add it to your PATH like with STLINK.

Lastly the user will need the STM32 Standard Peripheral Library (STSW-STM32068 was used here):
https://www.st.com/en/embedded-software/stm32-standard-peripheral-library-expansion.html?querycriteria=productId%3DLN1734#products

After the Makefile has been edited (see comments to know what should be changed) the following commands will get the project running on the STM32:
```
make
make burn
```
***Note: My STM32 was protective of being programmed on Linux, I would need to type sudo make burn for it to program my board.***
