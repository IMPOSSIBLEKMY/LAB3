/*
 * 7SEG.c
 *
 *  Created on: Nov 11, 2024
 *      Author: NTKM
 */

#include "7SEG.h"

int buffer_7SEG_vertical[2] = {0, 0};

int buffer_7SEG_horizontal[2] = {0, 0};

void display7SEGvertical(int num)
{
	switch(num)
	{
	    case 0:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
	        break;
	    }
	    case 1:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
	        break;
	    }
	    case 2:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 3:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 4:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 5:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 6:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 7:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
	        break;
	    }
	    case 8:
	    {
	    	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 9:
	    {
	        HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
	        break;
	    }
	}

}

void display7SEGhorizontal(int num)
{
	switch(num)
	{
	    case 0:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
	        break;
	    }
	    case 1:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
	        break;
	    }
	    case 2:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 3:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 4:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 5:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 6:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 7:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
	        break;
	    }
	    case 8:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	        break;
	    }
	    case 9:
	    {
	        HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
	        break;
	    }
	}
}

void display7SEGBuffervertical(int num)
{
	switch(num)
	{
	case 0:
	{
        HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
        display7SEGvertical(buffer_7SEG_vertical[num]);
		break;
	}
	case 1:
	{
        HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
        display7SEGvertical(buffer_7SEG_vertical[num]);
		break;
	}
	}
}

void display7SEGBufferhorizontal(int num)
{
	switch(num)
	{
	case 0:
	{
        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
        display7SEGhorizontal(buffer_7SEG_horizontal[num]);
		break;
	}
	case 1:
	{
        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
        display7SEGhorizontal(buffer_7SEG_horizontal[num]);
		break;
	}
	}
}
