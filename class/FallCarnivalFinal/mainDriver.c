#include "carnival.h"

int main (void)
{
	int choice, goAgain = 1;

	printf("\n\n/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n");
	printf("~ / ~ / ~ / ~ /  WELCOME TO THE   / ~ / ~ / ~ / ~\n");
	printf("~ / ~ / ~ / ~ /  FALL CARNIVAL!   / ~ / ~ / ~ / ~\n");
	printf("/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n\n");

	while (goAgain == 1)
	{
		printf("/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n\n");
		printf("Which carnival game would you like to play?\n");
		printf("1. Pumpkin Contest\n");
		printf("2. Guess Your Weight\n");
		printf("3. Personality Test\n");
		printf("Enter the integer corresponding to your choice:\n\n");
		scanf ("%i", &choice);
		printf("\n/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n\n");

		switch (choice)
		{
			case 1:
				contest();
				break;
			case 2:
				guessedWeight();
				break;
			case 3:
				personality();
				break;
			default:
				printf ("Invalid choice!\n\n");
				break;
		}

		printf ("/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n\n"); 		
		printf ("Would you like to play another game?\n");
		printf ("(Enter 1 for Yes or 0 for No):\n\n");
		scanf  ("%i", &goAgain);
		printf ("\n\n/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n\n"); 		
	}
	
	return 0;
}
