/* User inputs integer values for two variables and program evaluates four expressions
   using said variables */

#include <stdio.h>

int main (void)
{

	int v1, v2, e1, e2, e3, e4;

	fprintf (stdout, "Enter two integers to be assigned to v1 and v2: \n\n");
	fscanf  (stdin, "%i %i", &v1, &v2);

	e1 = v1 + 2 * v2 / 3 * v1;
	e2 = v1 + ((2 * v2) / (3 * v1));
	e3 = v1 + (2 * (v2 / 3)) * v1;
	e4 = (v2 % v1) % (v2 / v1);

	fprintf (stdout, "\n\nv1 = %i and v2 = %i\n", v1, v2);
	fprintf (stdout, "Expression values are\n");
	fprintf (stdout, "e1 = %i, e2 = %i, and  e3 = %i  e4 = %i\n\n", e1, e2, e3, e4);

	return 0;
} 
