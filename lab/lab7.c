//scans from user input for which country's flag to create and width of flag
//and creates ppm image of flag with inputted width

#include <stdio.h>

//function prototypes
void make_pixel (unsigned char r, unsigned char g, unsigned char b);
void make_ppm_header (int width, int height);
void make_ppm_image (int country_code, int width);
void make_france_flag (int width);
void make_germany_flag (int width);
void make_lithuania_flag (int width);

int main(void)
{
	int width;
	int country_code;
	
	//scans for which flag to create image for and width of image
	fscanf (stdin, "%d %d", &country_code, &width);
	fprintf(stderr, "Making country %d width %d\n\n", country_code, width);

	//calls function to create flag image
	make_ppm_image(country_code, width);

	return(0);
}

void make_pixel (unsigned char r, unsigned char g, unsigned char b) 
{
	fprintf (stdout, "%c%c%c", r, g, b);
}

void make_ppm_image (int country_code, int width)
{
	if (country_code == 0)
	{
		make_france_flag(width);
	}
	else if (country_code == 1)
	{
		make_germany_flag(width);
	}
	else
	{
		make_lithuania_flag(width);
	}
}

void make_ppm_header (int width, int height)
{
	fprintf (stdout, "P6\n");
	fprintf (stdout, "%d %d %d\n", width, height, 255);
}

void make_france_flag(int width)
{
	int i, x;
	int height = ((2*width) / 3);
	int thirdWidth = (width /3);

	make_ppm_header(width, height);

	for (i = 0; i < height; i++)
	{
		for (x = 0; x < thirdWidth; x++)
			make_pixel(0, 85, 164);
		for (x = 0; x < thirdWidth; x++)
			make_pixel(255, 255, 255);
		for (x = 0; x < (width - 2*thirdWidth); x++)
			make_pixel(250, 60, 50);
	}
}

void make_germany_flag(int width)
{
	int i, x;
	int height = ((3 * width) / 5);
	int thirdHeight = (height / 3);
	
	make_ppm_header(width, height);

	for (i = 0; i < thirdHeight; i++)
		for (x = 0; x < width; x++)
			make_pixel(0, 0, 0);
	for (i = 0; i < thirdHeight; i++)
		for (x = 0; x < width; x++)
			make_pixel(255, 0, 0);
	for (i = 0; i < (height - 2*thirdHeight); i++)
		for (x = 0; x < width; x++)
			make_pixel(255, 204, 0);
}

void make_lithuania_flag(int width)
{
	int i, x;
	int height = ((3 * width) / 5);
	int thirdHeight = (height / 3);

	make_ppm_header(width, height);
	
	for (i = 0; i < thirdHeight; i++)
		for (x = 0; x < width; x++)
			make_pixel(253, 185, 19);
	for (i = 0; i < thirdHeight; i++)
		for (x = 0; x < width; x++)
			make_pixel(0, 106, 68);
	for (i = 0; i < (height - 2*thirdHeight); i++)
		for (x = 0; x < width; x++)
			make_pixel(193, 39, 45);
}
