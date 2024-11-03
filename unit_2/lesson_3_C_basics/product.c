/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Manar Ahmed
 */


#include"stdio.h"

int main()
{

	float x,y,mult;
	printf("Enter two integers : ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	mult=x*y;

	printf("The Product: %f",mult);
}

