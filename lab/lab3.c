// prints powers 1-n of user-submitted integer x in decimal and hexidecimal form
// x = integer and n = power


#include <stdio.h>

int main (void)

{

	int x, n = 1, xn = 1;

	//program will not work for integer values > 8 
	fprintf(stdout, "Enter an integer:\n");
	fscanf (stdin, "%i", &x);
	
	fprintf(stdout, "         Powers of %i\n", x);

	while (n <= 10)
	{
		xn = xn * x;
		fprintf (stdout, "%3i %12i %8x\n", n, xn, xn);
		n++; 
	}

	return 0;
}
