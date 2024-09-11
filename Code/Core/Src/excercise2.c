/*
 * excercise2.c
 *
 *  Created on: 9 thg 9, 2024
 *      Author: ACER
 */
#include "excercise2.h"

void red_light() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
}

void yellow_light() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
}

void green_light() {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
}

void run_excercise2(int *state, int *count) {
	switch (*state) {
	case 0:
		red_light();
		(*count)++;
		if (*count > 4) {
			*count = 0;
			*state = 1;
		}
		break;
	case 1:
		yellow_light();
		(*count)++;
		if (*count > 1) {
			*count = 0;
			*state = 2;
		}
		break;
	case 2:
		green_light();
		(*count)++;
		if (*count > 2) {
			*count = 0;
			*state = 0;
		}
		break;
	default:
		break;
	}
}

