/*
	Nick Barrs	
	CPSC 1010-004
	13 November 2014
	Lab 11 part2.c
	Reads in numbers and operands from command line, performs each operation
	from left to right until the end of command line entry is reached,
	and prints final result of all operations
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	double a, b, answer;
	char op;
	int i = 3;

	sscanf (argv[1], "%lf", &a);
	answer = a;

	while (i < argc)
	{
		a = answer;
		--i;
		sscanf (argv[i], "%c", &op);
		i++;
		sscanf (argv[i], "%lf", &b);

		switch (op) {
			case '+':
				answer = a + b; 
				break;
			case '-':
				answer = a - b;
				break;
			case 'x':
				answer = a * b;
				break;
			case '/':
				answer = a / b;
		}
		i++;		
	}

	printf ("\nAnswer is %12.3lf.\n\n", answer);
	return 0;
}
