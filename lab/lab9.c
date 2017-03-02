#include <stdio.h>

int swapper (int array[], int count);

int main (void)
{
	int array[100], counter = 0, i = 0, j = 0, k = 0, z = 0;

	while (scanf("%d", &array[i]) != EOF)
	{
		counter++;
		i++;
	}

	while (j < counter)
	{
		swapper(array, counter - z);
		j++;
		z++;
		if (swapper == 0)
		{
			j = counter;
		}
	}

	while (k < counter)
	{
		fprintf (stdout, "Array[%i] is %i.\n", k, array[k]);
		k++;
	}

	return 0;	

}

int swapper (int array[], int count)
{
	int i, j, temp, swaps;
	for (i = 0; i < (count - 1); ++i)
	{
		for (j = 0; j < count - 1 - i; ++j)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
				swaps++;
			}
		}
	}
	
	return swaps;
}

