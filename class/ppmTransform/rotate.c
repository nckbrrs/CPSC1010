/*
    Nicholas Barrs
    nbarrs
    CPSC 1010-001
    1 December 2014
    Assignment #2
	rotate.c - rotates image 90 degrees
	clockwise
*/

#include "transform.h"

void rotate (int width, int height, struct pixel *image)
{
	int k, m, n = 0, totPix = height * width;

	//allocates space for new image
	struct pixel *rotated = 
		(struct pixel *) malloc (sizeof(struct pixel) * height * width);

	//rotates pixel data and assigns data to new rotated image
	for (k = 0; k <= height; k++)
	{
		for (m = (totPix + k) - width; m >= 0; m -= width )
		{
			rotated[n].r = image[m].r;
			rotated[n].g = image[m].g;
			rotated[n].b = image[m].b;
			n++;
		}
	}

	//calls function to print new image
	printROTATED (width, height, rotated);
}
