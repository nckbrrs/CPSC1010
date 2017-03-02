/*
    Nicholas Barrs
    nbarrs
    CPSC 1010-001
    1 December 2014
    Assignment #2
	parse.c - takes in image and reads header information such as image type, image
	width and height, and max rgb value while disregarding possible comments in header;
	assigns image width and height to variables to be used in other program 
	functions; also copies pixel data from image and assigns to a new array of pixel
	data
*/


#include "transform.h"

void parseHeader (FILE *input)
{
	char ch;
	int maxval;

	//scans image type from header
	fscanf(input, "P%c\n", &ch);

	//checks for comments and disregards them
	ch = getc(input);
	while (ch == '#')
	{
		do
		{
			ch = getc(input);
		} while (ch != '\n');
		
		ch = getc(input);
	}

	ungetc(ch, input);

	//scans width and height from header
	fscanf (input, "%d %d", &g_width, &g_height);

	//checks for comments and disregards them
	ch = getc(input);
	while (ch == '#')
	{
		do
		{
			ch = getc(input);
		} while (ch != '\n');
	
		ch = getc(input);
	}

	ungetc(ch, input);
	
	//scans max rgb value from header
	fscanf (input, "%d\n", &maxval);

}

void parseImage (FILE *input, struct pixel *theArray)
{
	int i;

	//called in order to pass over header data to get to pixel data
	parseHeader (input);

	//assigns inputted image pixel data to array
	while (i < g_width * g_height)
	{
		theArray[i].r = getc(input);
		theArray[i].g = getc(input);
		theArray[i].b = getc(input);
		i++;
	}
}
