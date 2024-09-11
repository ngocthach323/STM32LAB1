/*
 * excercise1.c
 *
 *  Created on: Sep 10, 2024
 *      Author: ACER
 */
#include "excercise1.h"

void run_excercise1(int *status) {
	switch (*status) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
			*status = 1;
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
			*status = 0;
			break;
	}
}

