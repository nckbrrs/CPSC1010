/*
   Nicholas Barrs
   CPSC 1011
   30 October 2014
   lab11.c - reads two strings from user, prints their length, and 
   concatenates the two strings
*/

#include <stdio.h>
#include <string.h>

int my_strlen (char s1[]);
void my_strcat (char s1[], char s2[]);

int main (void)
{
	char v1[16];
	char v2[16];
	int i1;
	int i2;

	printf("Enter two strings of at most 7 characters:\n");
	scanf ("%s", v1);
	scanf ("%s", v2);
	
	i1 = my_strlen (v1);
	i2 = my_strlen (v2);
	
	//prints length of strings and strings themselves
	printf("len: %3d - string: %s \n", i1, v1);
	printf("len: %3d - string: %s \n", i2, v2);

	my_strcat (v1, v2);
	
	//prints final concatenated string
	printf("concatenated strings: %s\n\n", v1);

}

//determines length of string
int my_strlen (char s1[])
{
	int count = 0;

	while (s1[count] != '\0')
		++count;
	
	return count;
}

//concatenates two strings
void my_strcat (char s1[], char s2[])
{
	int i = 0;
	int j = 0;
	
	while (s1[i] != '\0')
		++i;

	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		++j;
	}	
	
	s1[i + j] = '\0';
}

		
