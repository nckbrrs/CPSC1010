/*
	Nicholas Barrs
	nbarrs
	CPSC 1010-001
	4 December 2014
	Lab 13
	color.c - functions used in main.c
*/

/* color.c */

#include "color.h"

int get_color(color_t *color)
{
   /* fill code here */
	int sum;

	//scans in three pixel values
	sum = fscanf(stdin, "%i%i%i", 
			&color->pixel.r, &color->pixel.g, &color->pixel.b);
	
	//reads name of color if values are correct format
	if (sum != 3)
		return (-1);	
	else
	{
		fgets(color->name, 64, stdin);
		return (0);
	}
}

void compute_luminance(color_t *color)
{
   /* fill code here */
	//calculates luminance of color
	color->luminance = 
		(color->pixel.r * 0.3) + 
		(color->pixel.g * 0.59) +
		(color->pixel.b * 0.11);
}

color_t *find_brightest(color_t *colors, int count)
{
   /* fill code here */
	color_t *max = &colors[0];
	int i;
	
	//determines color with greatest luminance
	for (i = 0; i < count; i++)
	{
		if (colors[i].luminance > max->luminance)
			*max = colors[i];
	}

	return max;
}

