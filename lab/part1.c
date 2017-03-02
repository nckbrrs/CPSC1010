/*
	Nick barrs
	CPSC 1010-004
	13 November 2014
	Lab 11 part 1.c
	Reads in two numbers and an operand from the command line, performs 
	operation between the two numbers and prints result
*/

#include <stdio.h>

int main (int argc, char *argv[])
{

	double Num1, Num2, answer;
	char op;

	sscanf (argv[1], "%lf", &Num1);
	sscanf (argv[3], "%lf", &Num2);
	sscanf (argv[2], "%c", &op);

	switch (op) {
		case '+':
			answer = Num1 + Num2;
			break;
		case '-':
			answer = Num1 - Num2;
			break;
		case 'x':
			answer = (Num1 * Num2);
			break;
		case '/':
			answer = Num1 / Num2;
			break;
		default:
			printf ("\nInvalid operator.");
			break;
	}

	printf ("\n%12.3lf %c %12.3lf = %12.3lf\n\n", Num1, op, Num2, answer);
	return 0;
}

