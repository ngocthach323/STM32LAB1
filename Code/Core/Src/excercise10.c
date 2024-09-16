/*
 * excercise10.c
 *
 *  Created on: Sep 10, 2024
 *      Author: ACER
 */
#include "excercise10.h"

void setNumberOnClock(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);  // LED cho số 12
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);  // LED cho số 1
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET);  // LED cho số 2
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_SET);  // LED cho số 3
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_SET);  // LED cho số 4
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);  // LED cho số 5
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);  // LED cho số 6
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);  // LED cho số 7
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);  // LED cho số 8
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);  // LED cho số 9
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);  // LED cho số 10
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);  // LED cho số 11
			break;
	}
}


void clearNumberOnClock(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET);
			break;
	}
}

void displayClock(int *hour, int *minute, int *second) {
	int hourLed = *hour % 12;
	int minuteLed = *minute / 5;
	int secondLed = *second / 5;

	//Tắt LED trước đó
	if (secondLed == 0) {
		clearNumberOnClock(11);
	}
	else {
		clearNumberOnClock(hourLed - 1);
		clearNumberOnClock(minuteLed - 1);
		clearNumberOnClock(secondLed - 1);
	}

	//Bật LED hiện tại
	setNumberOnClock(hourLed);
	setNumberOnClock(minuteLed);
	setNumberOnClock(secondLed);

	(*second)++;
	if (*second >= 60) {
		*second = 0;
		(*minute)++;
		if (*minute >= 60) {
			*minute = 0;
			(*hour)++;
			if (*hour >= 12) {
				*hour = 0;
			}
		}
	}

}
