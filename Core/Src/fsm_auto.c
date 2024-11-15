/*
 * fsm_auto.c
 *
 *  Created on: Nov 12, 2024
 *      Author: NTKM
 */

#include "fsm_auto.h"

int red_yellow_green_auto_time_vertical[3] = {13, 3, 10};
int temp_red_yellow_green_auto_time_vertical[3] = {0, 0, 0};

int red_yellow_green_auto_time_horizontal[3] = {13, 3, 10};
int temp_red_yellow_green_auto_time_horizontal[3] = {0, 0, 0};

int status_horizontal = INIT_AUTO;
int status_vertical = INIT_AUTO;

int num_horizontal = 1;
int num_vertical = 1;

void fsm_automatic()
{
	fsm_auto_horizontal();

	fsm_auto_vertical();

}

void fsm_auto_horizontal()
{
	switch(status_horizontal)
	{
	case INIT_AUTO:
	{
		for(int i = 0; i < 3; i++)
		{
			temp_red_yellow_green_auto_time_horizontal[i] = red_yellow_green_auto_time_horizontal[i];
		}

		setTimer7SEGCountRedhorizontal(1000);
		num_horizontal = 1;
		status_horizontal = AUTO_RED;
		break;
	}
	case AUTO_RED:
	{
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_RESET);

		if(temp_red_yellow_green_auto_time_horizontal[0] < 0)
		{
			setTimer7SEGCountGreenhorizontal(1000);
			num_horizontal = 1;
			status_horizontal = AUTO_GREEN;
		}

		buffer_7SEG_horizontal[0] = temp_red_yellow_green_auto_time_horizontal[0] / 10;
		buffer_7SEG_horizontal[1] = temp_red_yellow_green_auto_time_horizontal[0] % 10;

		if(timer7SEGCountRedhorizontal_flag == 1)
		{
			temp_red_yellow_green_auto_time_horizontal[0]--;
			setTimer7SEGCountRedhorizontal(1000);
		}

		break;
	}
	case AUTO_YELLOW:
	{
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_RESET);

		if(temp_red_yellow_green_auto_time_horizontal[1] < 0)
		{
			status_horizontal = INIT_AUTO;
		}

		buffer_7SEG_horizontal[0] = temp_red_yellow_green_auto_time_horizontal[1] / 10;
		buffer_7SEG_horizontal[1] = temp_red_yellow_green_auto_time_horizontal[1] % 10;

		if(timer7SEGCountYellowhorizontal_flag == 1)
		{
			temp_red_yellow_green_auto_time_horizontal[1]--;
			setTimer7SEGCountYellowhorizontal(1000);
		}

		break;
	}
	case AUTO_GREEN:
	{
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_SET);

		if(temp_red_yellow_green_auto_time_horizontal[2] < 0)
		{
			setTimer7SEGCountYellowhorizontal(1000);
			num_horizontal = 1;
			status_horizontal = AUTO_YELLOW;
		}

		buffer_7SEG_horizontal[0] = temp_red_yellow_green_auto_time_horizontal[2] / 10;
		buffer_7SEG_horizontal[1] = temp_red_yellow_green_auto_time_horizontal[2] % 10;

		if(timer7SEGCountGreenhorizontal_flag == 1)
		{
			temp_red_yellow_green_auto_time_horizontal[2]--;
			setTimer7SEGCountGreenhorizontal(1000);
		}

		break;
	}
	}

	if(timerENhorizontal_flag == 1)
	{
		if(num_horizontal > 1)
		{
			num_horizontal = 0;
		}

		display7SEGBufferhorizontal(num_horizontal);

		num_horizontal++;
		setTimerENhorizontal(500);
	}

}

void fsm_auto_vertical()
{

	switch(status_vertical)
	{
	case INIT_AUTO:
	{
		for(int i = 0; i < 3; i++)
		{
			temp_red_yellow_green_auto_time_vertical[i] = red_yellow_green_auto_time_vertical[i];
		}

		setTimer7SEGCountGreenvertical(1000);
		num_vertical = 1;
		status_vertical = AUTO_GREEN;
		break;
	}
	case AUTO_RED:
	{
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET);

		if(temp_red_yellow_green_auto_time_vertical[0] < 0)
		{
			status_vertical = INIT_AUTO;
		}

		buffer_7SEG_vertical[0] = temp_red_yellow_green_auto_time_vertical[0] / 10;
		buffer_7SEG_vertical[1] = temp_red_yellow_green_auto_time_vertical[0] % 10;


		if(timer7SEGCountRedvertical_flag == 1)
		{
			temp_red_yellow_green_auto_time_vertical[0]--;
			setTimer7SEGCountRedvertical(1000);
		}

		break;
	}
	case AUTO_YELLOW:
	{
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET);

		if(temp_red_yellow_green_auto_time_vertical[1] < 0)
		{
			setTimer7SEGCountRedvertical(1000);
			num_vertical = 1;
			status_vertical = AUTO_RED;
		}

		buffer_7SEG_vertical[0] = temp_red_yellow_green_auto_time_vertical[1] / 10;
		buffer_7SEG_vertical[1] = temp_red_yellow_green_auto_time_vertical[1] % 10;

		if(timer7SEGCountYellowvertical_flag == 1)
		{
			temp_red_yellow_green_auto_time_vertical[1]--;
			setTimer7SEGCountYellowvertical(1000);
		}

		break;
	}
	case AUTO_GREEN:
	{
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);

		if(temp_red_yellow_green_auto_time_vertical[2] < 0)
		{
			setTimer7SEGCountYellowvertical(1000);
			num_vertical = 1;
			status_vertical = AUTO_YELLOW;
		}

		buffer_7SEG_vertical[0] = temp_red_yellow_green_auto_time_vertical[2] / 10;
		buffer_7SEG_vertical[1] = temp_red_yellow_green_auto_time_vertical[2] % 10;


		if(timer7SEGCountGreenvertical_flag == 1)
		{
			temp_red_yellow_green_auto_time_vertical[2]--;
			setTimer7SEGCountGreenvertical(1000);
		}

		break;
	}
	}

	if(timerENvertical_flag == 1)
	{
		if(num_vertical > 1)
		{
			num_vertical = 0;
		}

		display7SEGBuffervertical(num_vertical);

		num_vertical++;
		setTimerENvertical(500);
	}
}
