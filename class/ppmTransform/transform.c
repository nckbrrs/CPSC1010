/*
	Nicholas Barrs
	nbarrs
	CPSC 1010-001
	1 December 2014
	Assignment #2
	transform.c file - the main driver
		first calls parseHeader() to get the g_width and g_height
		calls parseImage() to get the pixel data
		then calls appropriate manipulation function depending on user input:
			1: mirror image
			2: upside-down
			3: rotated to the right 90 degrees
		calls to functions to print the header and the image

	the makefile:
		expects the following files:
			transform.c
			print.c
			mirror.c
			flipHoriz.c
			rotate.c
			(parse.o is included in the files that you copy over; if you do 
			 not write your own parse.c file, you can use the given parse.o 
			 and receive a grade no higher than an 85)
		creates an executable called transform

	to run the program:
		transform 1 twoTigers.ppm > img1.ppm
		transform 2 twoTigers.ppm > img2.ppm
		transform 3 twoTigers.ppm > img3.ppm
*/ 

#include "transform.h"

int main (int argc, char *argv[])  {

	// declarations here
	FILE *inputFile;
	struct pixel *image;
	int choice;

	// open input file 
	inputFile = fopen (argv[2], "r");

	// parseHeader function call here
	parseHeader(inputFile);

	// malloc space for the array (example given in assignment write-up)
	image =
		(struct pixel *) malloc(sizeof(struct pixel) * g_width * g_height);
 
	// parseImage function call here
	parseImage(inputFile, image);

	// close input file 
	fclose (inputFile);
	
	// manipulate the image according to command-line parameter
	//		1: mirror image
	//		2: upside down image
	//		3: rotate to the right 90 degrees
	
	sscanf(argv[1], "%i", &choice);
	
	switch (choice)
	{
		case 1:
			flipHoriz (g_width, g_height, image);
			break;
		case 2:
			mirror (g_width, g_height, image);
			break;	
		case 3:
			rotate (g_width, g_height, image);
			break;
		default: 
			printf ("\nInvalid transformation choice.\n\n");
			break;
	}

	return 0;
}
	
