/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Manar Ahmed
 */


#include"stdio.h"

void main(){
	char C;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&C);
	printf("ASCII value of '%c' is %d\n",C,(int)C);
}

