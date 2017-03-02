#include "lab8.h"

int inner_product(int a[], int b[], int count)
{
	int i, c, innerProduct = 0;
 
	for (i = 0; i < count; i++)
	{
		c = (a[i] * b[i]);
		innerProduct += c;
	}

	return innerProduct;	
}

void reverse(int a[], int count)
{
	int i, temp;

	for (i = 0; i < count / 2; i++)
	{
		temp = a[i];
		a[i] = a[count - 1 - i];
		a[count - 1 - i] = temp;;
	}
}
