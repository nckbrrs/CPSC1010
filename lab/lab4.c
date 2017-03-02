/* program determines whether user-inputted grades are As, Bs, or Cs and 
   prints results at end of program */

#include <stdio.h>

int main (void)
{

	int count, grade, A = 0, B = 0, C = 0, x = 0;

	// prompts user to say how many grades they will be entering
	fprintf(stdout, "\nEnter the number of scores you want to count:\n\n");
	fscanf (stdin, "%i", &count);
	
	//promts user to enter grades
	fprintf (stdout, "\nEnter the scores one at a time: \n\n");

	/* loops until number of grades entered equals number of grades that
	   user said should be entered at start of program */ 
	while ( x < count )

	// scans for scores and determines whether they are A, B, C, or invalid
	{
		fscanf(stdin, "%i", &grade);

		if (grade >= 90 && grade <= 100) {
			A++;
			x++;
		}
		else if (grade >= 80 && grade < 90) {
			B++;
			x++;
		}
		else if (grade >= 0 && grade < 80) { 
			C++;
			x++;
		}
		/* tells user if entered grade is out of range 0-100
	           and how many more scores they should enter */ 
		else	{
			fprintf(stdout, "\nScore is invalid.\n");
			fprintf(stdout, "Enter %i more grades:\n", count - x);
		}	

	}

	//prints number of  As, Bs, and Cs
	fprintf(stdout, "\nNumber of As: %i", A);
	fprintf(stdout, "\nNumber of Bs: %i", B);
	fprintf(stdout, "\nNumber of Cs: %i\n\n", C);
	
	return 0;
}
		
