/*
   Nicholas Barrs
   nbarrs
   CPSC 101 - 001
   16 October 2014
   Program Assignment 1: Final Phase - contest.c
   Pumpkin Contest: scans for 6 scores, calculates total and minimum score,
   drops minimum score and averages the remaining scores, prints calculated 
   score, prompts user to see if they want to go again, and prints a summary
   of scores after all are entered
*/
#include "carnival.h"

int contest (void)
{

	int i, howMany = 6, tshirt = 0, goAgain = 1, PumpkinCount;
	int scores[6], minimum;
	float sum, PumpkinAvg, AvgSum = 0, TotalAvg;

	printf ("\n\n/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n");
	printf ("~ / ~ / ~ / ~ /  PUMPKIN CONTEST  / ~ / ~ / ~ / ~\n\n");

	for (PumpkinCount = 0; goAgain == 1; PumpkinCount++) {
		sum = 0;
		printf ("\n-----------------------------");
		printf ("\nEnter %i scores one at a time:\n", howMany);

		/* scans scores until # of scores entered matches # of judges */
		for (i = 0; i < howMany; i++) {
			scanf ("%i", &scores[i]);
			sum += scores[i];
			if (scores[i] < 0 || scores[i] > 10) {
				printf ("\nScore is invalid.\n");
				sum -= scores[i];
				i--;
				
			}
		}
		
		/* determines minimum score */	
		minimum = scores[0];
		for (i = 1; i < howMany; i++) {
				if (scores[i] < minimum)
					minimum = scores[i];
		}

		/* drops minimum score and calculates+prints average score */
		PumpkinAvg = (sum - minimum) / (howMany - 1);
		printf ("\nAverage of scores is: %.1f\n\n", PumpkinAvg);
		
		/* calculates sum of average scores of all pumpkins so far */
		AvgSum += PumpkinAvg;

		if (PumpkinAvg >= 9 && PumpkinAvg <= 10) {
			printf ("That contestant wins a t-shirt!\n\n");
			tshirt++;

		}
		
		printf ("\nIs there another pumpkin to enter scores for?\n");
		printf ("(Enter 1 for Yes and 0 for No)\n");
		scanf  ("%i", &goAgain);
	
	}

	/* calculates overall average score of all pumpkins */
	TotalAvg = AvgSum / PumpkinCount;
	
	/* prints a summary of contest results */
	printf ("\n\n-.-'-.-'-.-'-.-'-.-SUMMARY-.-'-.-'-.-'-.-'-.-'-.-\n\n");
	printf ("\nThere were %i pumpkins entered.\n", PumpkinCount);
	printf ("%i contestant(s) won t-shirts!\n", tshirt);
	printf ("The average of all of the scores was %.1f.\n\n", TotalAvg);

	return 0;
}
