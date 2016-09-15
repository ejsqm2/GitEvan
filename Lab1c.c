/*
 * Lab1c.c
 *
 *  Created on: Sep 1, 2016
 *      Author: ejsqm2
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){
	char op;
	int op1, op2, check=1;
	float result;

	do{
		check=1;	//resets check if looped
		printf("Enter operand 1: ");
		scanf("%d", &op1);			//get first operand
		printf("Enter operator (+-/*): ");
		scanf("\n%c", &op);		//get operator

		printf("Enter operand 2: ");
		scanf("%d", &op2);			//get second operand

		switch(op){			//go to proper operator and calculate and display result
			case '+':
				result = op1 + op2;	//result is addition
				printf("%d + %d = %d\n", op1, op2, (int)result);
				break;

			case '-':	//result is subtraction
				result = op1 - op2;
				printf("%d - %d = %d\n", op1, op2, (int)result);
				break;

			case '*':	//result is multiplication
				result = op1 * op2;
				printf("%d * %d = %d\n", op1, op2, (int)result);
				break;

			case '/':	//result is division

				if(op2==0){	//if dividing by 0
					printf("Error! Division by zero.\n");
					check = 0;				//invalid input loop input
					break;
				}
				result = op1 / op2;
				printf("%d / %d = %.2f\n", op1, op2, result);
				break;

			default:
				printf("Wrong format! Please re-enter!\n");
				check = 0;
				break;
		}
	}while(check ==0);
}
