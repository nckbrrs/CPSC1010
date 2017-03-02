/*
   Nicholas Barrs
   nbarrs
   CPSC 101 - 001
   16 October  2014
   Program Assignment 1: Final Phase - guessedWeight
   GuessMyWeight: scans value from user to represent user's weight, generates 
   a random number between 50-200 and compares generated value to inputted
   weight; if generated value is not within 10 "pounds" of inputted weight,
   user wins a teddy bear, and program asks if the user wants to try again. 
   loop ends when user no longer wants to try again or when  generated value is
   within 10 "pounds" of the inputted weight. at the end, the program prints a
   summary of how many teddy bears were won.
*/
#include "carnival.h"

int guessedWeight (void)
{

	int weight, runScan = 1, guess, teddy, MofError, goAgain = 1;

	printf ("\n/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n");
	printf ("~ / ~ / ~ / ~  GUESS MY WEIGHT  ~ / ~ / ~ / ~ / ~\n\n");

	while (runScan == 1) {
		printf ("Enter your weight as an integer from 50 - 200\n\n");
		scanf  ("%i", &weight);
		if (weight > 200 || weight < 50) {
			printf ("Invalid weight; enter another integer:\n\n");
			runScan = 1;
		}
		else {
			runScan = 0;
		}
	}

	/*generates a random number "guess" and loops until user does not want to
	  go again or when generated number is within 10 of user inputted weight*/
	while (goAgain == 1) {
		srand(time(NULL));
		guess = rand() % (151) + 50;
		MofError = (guess - weight);
		printf ("\nI guessed %i\n", guess);

		if (MofError < -10 || MofError > 10) {
			printf ("which wasn't even close to your weight!\n\n");
			printf ("You win a teddy bear!\n\n");
			teddy++;
			printf ("Do you want for me to guess again?");
			printf (" (Enter: 1 for Yes or 0 for No)\n\n");
			scanf  ("%i", &goAgain);
		}
		else {
			printf("which is within 10 pounds of your weight!\n\n");
			goAgain = 0;
		}
	
	}


	printf ("-.-'-.-'-.-'-.-'-.- SUMMARY -.-'-.-'-.-'-.-'-.-\n\n");
	printf ("The contestant won %i teddy bears!\n\n", teddy);

	return 0;
}
	
