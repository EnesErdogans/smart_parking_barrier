#include "stm32f4xx.h"

void delay(volatile uint32_t time)
{
    while (time--) {
        __NOP();
    }
}

int main(void)
{
    /* 1. GPIOA ve GPIOD saatlerini aç (AHB1 bus) */
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;   // GPIOA clock enable
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;   // GPIOD clock enable

    /* 2. PD12 ve PD13'ü output moda al (MODER = 01) */
    GPIOD->MODER &= ~(0x3U << (12 * 2));   // PD12 temizle
    GPIOD->MODER &= ~(0x3U << (13 * 2));   // PD13 temizle

    GPIOD->MODER |=  (0x1U << (12 * 2));   // PD12 output
    GPIOD->MODER |=  (0x1U << (13 * 2));   // PD13 output

    /* 3. PA0'i input yap ve pull-down ekle */
    GPIOA->MODER &= ~(0x3U << (0 * 2));    // PA0 input
    GPIOA->PUPDR &= ~(0x3U << (0 * 2));    // pull ayarlarini temizle
    GPIOA->PUPDR |=  (0x2U << (0 * 2));    // 10 -> pull-down

    /* 4. Çikis tipi ve hiz */
    GPIOD->OTYPER &= ~((1U << 12) | (1U << 13)); // push-pull
    GPIOD->OSPEEDR &= ~(0x3U << (12 * 2));
    GPIOD->OSPEEDR &= ~(0x3U << (13 * 2));
    GPIOD->OSPEEDR |=  (0x2U << (12 * 2));       // high speed
    GPIOD->OSPEEDR |=  (0x2U << (13 * 2));

    while (1)
    {
        uint32_t button_state = (GPIOA->IDR & (1U << 0)); // PA0 oku

        if (button_state)
        {
            // Buton basili ise LED + Buzzer ON
            GPIOD->BSRR = (1U << 12) | (1U << 13);
        }
        else
        {
            // Degilse kapat
            GPIOD->BSRR = (1U << (12 + 16)) | (1U << (13 + 16));
        }

        delay(200000);
    }
}
