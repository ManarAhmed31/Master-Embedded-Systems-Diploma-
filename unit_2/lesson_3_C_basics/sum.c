/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Manar Ahmed
 */


#include"stdio.h"

int main()
{

	int x,y,sum;
	printf("Enter two integers : ");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	sum=x+y;

	printf("The sum is  %d",sum);
}

