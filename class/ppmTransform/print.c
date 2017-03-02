/*
    Nicholas Barrs
    nbarrs
    CPSC 1010-001
    1 December 2014
    Assignment #2
	print.c - takes in image width, height, and pixel data; prints new image
*/

#include "transform.h"

void printPPM (int width, int height, struct pixel *newImage)
{
	int i;
	
	//prints ppm image header
	printf("P6\n");
	printf("%i %i 225\n", width, height);

	//prints pixel data
	for (i = 0; i < (width * height); i++)
	{
		printf("%c%c%c", newImage[i].r, newImage[i].g, newImage[i].b);
	}
}

void printROTATED (int width, int height, struct pixel *newImage)
{
	int i;

	//prints ppm image header
	printf("P6\n");
	printf("%i %i 225\n", height, width);

	//prints pixel data
	for (i = 0; i < (width * height); i++)
	{
		printf("%c%c%c", newImage[i].r, newImage[i].g, newImage[i].b);
	}
}
