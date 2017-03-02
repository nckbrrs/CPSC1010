/*
    Nicholas Barrs
    nbarrs
    CPSC 1010-001
    1 December 2014
    Assignment #2
	flipHoriz.c - flips inputted image over horizontal axis
*/

#include "transform.h"

void flipHoriz (int width, int height, struct pixel *image)
{
	int m = 0, n, k;
	int totPix = width * height;

	//allocates space for new flipped image
	struct pixel *flipped =
		(struct pixel *) malloc (sizeof(struct pixel) * width * height);

	//copies pixel data and assigns flipped pixel data to new image
	for (k = 1; k <= height; k++)
	{
		for (n = 1; n <= width; n++)
		{
			flipped[m].r = image[(totPix - (k * width) + n)].r;
			flipped[m].g = image[(totPix - (k * width) + n)].g;
			flipped[m].b = image[(totPix - (k * width) + n)].b;
			m++;
		}
	}

	//calls function to print new image
	printPPM (width, height, flipped);
}
