#include "lab8.h"

int main (void) 
{
	int a[3] = {3, 2, 1};
	int b[3] = {2, 4, 6};
	int x[4] = {2, 3, 4, 5};
	int i;
	int countIP = 3, countReverse = 4;

	int innerProduct = inner_product(a, b, countIP);
	printf ("\nInner product is %i\n\n", innerProduct);
	
	reverse(x, countReverse);

	for (i = 0; i < countReverse; i++)
	{
		printf ("%i ", x[i]);
	}
	
	printf("\n\n");

	return 0;
}
