#include <stdio.h>
#include <stdlib.h>

struct pixel {
	char r, g, b;
};

int g_width, g_height;

void parseHeader ( FILE *input );
void parseImage ( FILE *input, struct pixel *theArray );


// other function prototypes here
void mirror (int g_width, int g_height, struct pixel *image);
void flipHoriz (int g_width, int g_height, struct pixel *image);
void rotate (int g_width, int g_height, struct pixel *image);
void printPPM (int g_width, int g_height, struct pixel *newImage);

