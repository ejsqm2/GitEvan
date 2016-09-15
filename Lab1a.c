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
	area = r * r * PI;	//calculates area
	printf("Area of the circle is: %.2f\n", area);	//displays area
	
	printf("this is a test comment\n");
	float circumference;
	circumference = 2 * r * PI;
	printf("Circumference of the circle is: %.2f\n\n", circumference);
	return EXIT_SUCCESS;
}
