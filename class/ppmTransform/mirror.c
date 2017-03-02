/*
    Nicholas Barrs
    nbarrs
    CPSC 1010-001
    1 December 2014
    Assignment #2
	mirror.c - flips image across veritcal axis
*/

#include "transform.h"

void mirror (int width, int height, struct pixel *image)
{
	int k, m, n = 0;

	//allocates space for new mirrored image
	struct pixel *mirrored = 
		(struct pixel *) malloc (sizeof(struct pixel) * height * width);

	//copies pixel data and assigns mirrored pixel data to new image
	for (k = 1; k <= height; k++)
	{
		for (m = k * width; m > ((k * width) - width); m--)
		{
			mirrored[n].r = image[m].r;
			mirrored[n].g = image[m].g;
			mirrored[n].b = image[m].b;
			n++;
		}

	}

	//calls function to print new image
	printPPM(width, height, mirrored);
}
