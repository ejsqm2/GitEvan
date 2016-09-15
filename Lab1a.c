/*
 ============================================================================
 Name        : Lab1.c
 Author      : Evan Schulte
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14						//stores a value for PI

int main(void) {
	float area, r;					//variables

	printf("Enter a value for radius > 0: ");	//gets input
	scanf("%f", &r);
	while(r<=0){	//if input is less than zero not correct value for radius
		printf("Invalid input. Enter value for radius >0: ");
		scanf("%f", &r);//get new input
	}
	area = 2 * r * PI;	//calculates area
	printf("Circumference of the circle is: %.2f\n\n", area);	//displays area
	return EXIT_SUCCESS;
}
