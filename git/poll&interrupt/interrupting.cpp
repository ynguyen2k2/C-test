// Interrupt

#include "main.h"
 
uint16_t AD_RES = 0;
 
ADC_HandleTypeDef hadc1;
TIM_HandleTypeDef htim2;
 
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_ADC1_Init(void);
static void MX_TIM2_Init(void);
 
int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_ADC1_Init();
    MX_TIM2_Init();
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
    // Calibrate The ADC On Power-Up For Better Accuracy
    HAL_ADCEx_Calibration_Start(&hadc1);
 
    while (1)
    {
        // Start ADC Conversion
        HAL_ADC_Start_IT(&hadc1);
        // Update The PWM Duty Cycle With Latest ADC Conversion Result
        TIM2->CCR1 = (AD_RES<<4);
        HAL_Delay(1);
    }
}
 
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
    // Read & Update The ADC Result
    AD_RES = HAL_ADC_GetValue(&hadc1);
}