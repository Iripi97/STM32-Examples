/* "Knight Rider" STM32 Discovery Linux Program
 * Created by: Justin Russo
*/
#include "stm32f4xx.h"

int main(void)
{
  long int i = 0;
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);					            	// Enabling PA_* pins
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);					            	// Enabling PD_* pins
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);					            	// Enabling PE_* pins
  GPIO_InitTypeDef GPIO_InitStruct;							                // Initializing the GPIO struct
  GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_12 |GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;			// Using pins PD_12, PD_13, PD_14, PD_15
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;						                // Making the pins outputs
  GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;						                // Using 2MHz speed
  GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;						                // Push-pull activation (manual on, manual off)
  GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(GPIOD, &GPIO_InitStruct);							                // Final initialization of PD pins

  GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_9 |GPIO_Pin_11 | GPIO_Pin_13 | GPIO_Pin_14;			// Using pins PE_9, PE_11, PE_13, PE_14
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;						                // Making the pins outputs
  GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;						                // Using 2MHz speed
  GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;						                // Push-pull activation (manual on, manual off)
  GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(GPIOE, &GPIO_InitStruct);							                // Final initialization of PE pins

  GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_0;						                // Using pin PA_0 (USER_BUTTON)
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;						                // Making the pins inputs
  GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_DOWN;						                // Uses a pull-down resistor
  GPIO_Init(GPIOA, &GPIO_InitStruct);							                // Final initialization of PA pin

  while(1)
  {
    if(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_0))					                // If button is pressed
    {
      GPIO_SetBits(GPIOE, GPIO_Pin_9);							                // Write pin high (activate LED1)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_ResetBits(GPIOE, GPIO_Pin_9);						                // Write pin low (deactivate LED1)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_SetBits(GPIOE, GPIO_Pin_11);							                // Write pin high (activate LED2)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_ResetBits(GPIOE, GPIO_Pin_11);						                // Write pin low (deactivate LED2)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_SetBits(GPIOE, GPIO_Pin_13);							                // Write pin high (activate LED3)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_ResetBits(GPIOE, GPIO_Pin_13);						                // Write pin low (deactivate LED3)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_SetBits(GPIOE, GPIO_Pin_14);							                // Write pin high (activate LED4)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_ResetBits(GPIOE, GPIO_Pin_14);						                // Write pin low (deactivate LED4)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_SetBits(GPIOD, GPIO_Pin_12);							                // Write pin high (activate LED5)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_ResetBits(GPIOD, GPIO_Pin_12);						                // Write pin low (deactivate LED5)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_SetBits(GPIOD, GPIO_Pin_13);							                // Write pin high (activate LED6)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_ResetBits(GPIOD, GPIO_Pin_13);						                // Write pin low (deactivate LED6)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_SetBits(GPIOD, GPIO_Pin_14);							                // Write pin high (activate LED7)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_ResetBits(GPIOD, GPIO_Pin_14);						                // Write pin low (deactivate LED7)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_SetBits(GPIOD, GPIO_Pin_15);							                // Write pin high (activate LED8)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
      GPIO_ResetBits(GPIOD, GPIO_Pin_15);						                // Write pin low (deactivate LED8)
      for (i=0; i<SystemCoreClock/300; i++)
      {
      __NOP();
      }
	  GPIO_SetBits(GPIOD, GPIO_Pin_15);						                // Write pin high (activate LED8)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_ResetBits(GPIOD, GPIO_Pin_15);						                // Write pin low (deactivate LED8)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_SetBits(GPIOD, GPIO_Pin_14);						                // Write pin high (activate LED7)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_ResetBits(GPIOD, GPIO_Pin_14);						                // Write pin low (deactivate LED7)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_SetBits(GPIOD, GPIO_Pin_13);						                // Write pin high (activate LED6)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_ResetBits(GPIOD, GPIO_Pin_13);						                // Write pin low (deactivate LED6)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_SetBits(GPIOD, GPIO_Pin_12);						                // Write pin high (activate LED5)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_ResetBits(GPIOD, GPIO_Pin_12);						                // Write pin low (deactivate LED5)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
	  GPIO_SetBits(GPIOE, GPIO_Pin_14);						                // Write pin high (activate LED4)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_ResetBits(GPIOE, GPIO_Pin_14);						                // Write pin low (deactivate LED4)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_SetBits(GPIOE, GPIO_Pin_13);						                // Write pin high (activate LED3)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_ResetBits(GPIOE, GPIO_Pin_13);						                // Write pin low (deactivate LED3)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_SetBits(GPIOE, GPIO_Pin_11);						                // Write pin high (activate LED2)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_ResetBits(GPIOE, GPIO_Pin_11);						                // Write pin low (deactivate LED2)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_SetBits(GPIOE, GPIO_Pin_9);						                // Write pin high (activate LED1)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
          GPIO_ResetBits(GPIOE, GPIO_Pin_9);						                // Write pin low (deactivate LED1)
          for (i=0; i<SystemCoreClock/300; i++)
          {
          __NOP();
          }
    }
  }
}
