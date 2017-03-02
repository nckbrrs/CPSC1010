/*
	Nick Barrs (nbarrs)
	CPSC 1011 - 4
	20 November 2014
	Lab 12:
	reads PPM image to standard input, prints image with complementary colors
	and swapped red and green pixel values
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct pixel_type {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} pixel_t;

int main (void)
{
	char headerFirstChar;
	int headerSecondNum, height, width, rgb, x, y, i;
	
	//reads header
	fscanf (stdin, "P6\n%i %i 255\n", &width, &height);

	//creates two-dimensional array where pixel values will be stored
	pixel_t image[height][width];

	//reads pixel values from image
	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			scanf ("%c", &image[y][x].g);
			scanf ("%c", &image[y][x].r);
			scanf ("%c", &image[y][x].b);
		}
	}

	//prints header
	printf ("P6\n");
	printf ("%i %i 255\n", width, height);

	//prints pixel values to new image
	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			printf("%c", (255 - image[y][x].r));
			printf("%c", (255 - image[y][x].g));
			printf("%c", (255 - image[y][x].b));
		}
	}

	return 0;
}
