/* lab6.c */

#include <stdio.h>

char make_upper(char);
char make_lower(char);
char swap_case(char);

char make_upper(char c)
{
	if (c >= 'a' && c <= 'z') {
		c -= 32;
	}
	return c;
}

char make_lower(char c)
{
	if (c >= 'A' && c <= 'Z') {
		c += 32;
	}
	return c;

}

char swap_case(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;

	return c;
}

int main (void)
{
	char c;
	char cl;
	char cu;
	char cs;

	int count;

	count = fscanf(stdin, "%c", &c);
	cu = make_upper(c);
	cl = make_lower(c);
	cs = swap_case(c);
	fprintf(stdout, "%c - %c %c %c \n", c, cu, cl, cs);
}
