/*
 * excercise2.c
 *
 *  Created on: 9 thg 9, 2024
 *      Author: ACER
 */
#include "excercise2.h"

void LED_RED_ON() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
}

void LED_YELLOW_ON() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
}

void LED_GREEN_ON() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
}

void LED_RED_OFF() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
}

void LED_YELLOW_OFF() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
}

void LED_GREEN_OFF() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
}

void run_excercise2() {
	LED_RED_ON();
	LED_YELLOW_OFF();
	LED_GREEN_OFF();
	HAL_Delay(5000);

	LED_RED_OFF();
	LED_GREEN_OFF();
	LED_YELLOW_ON();
	HAL_Delay(2000);

	LED_RED_OFF();
	LED_YELLOW_OFF();
	LED_GREEN_ON();
	HAL_Delay(3000);
}

