/*
   Nicholas Barrs
   nbarrs
   CPSC 101 - 001
   16 October 2014
   Program Assignment 1: Final Phase - personalityTest.c
   Personality Test: prompts user to input two integers: one that corresponds to
   his/her month of birth and another that corresponds to his/her favorite
   color. program scans these two integers and prints two pre-written
   statements based on which integers are inputted: one that describes user
   based on birth month and one that describes user based on fav. color.
*/

#include "carnival.h"

int personality (void) 
{
	int m, c, runMonth = 1, runColor = 1;
	
	printf ("/ ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ / ~ /\n");
	printf ("~ / ~ / ~ / ~ PERSONALITY TEST ~ / ~ / ~ / ~\n\n");

	while (runMonth == 1) {
		printf ("----------------------------------------------\n");
		printf ("Enter the integer for your birth month (1-12):\n");
		scanf  ("%i", &m);
		if (m > 0 && m < 13) {
			runMonth = 0;
		}
		else {
			printf ("Invalid input!\n\n");
			runMonth = 1;
		}
	}
	
	while (runColor == 1) {
		printf ("----------------------------------------------\n");
		printf ("Enter the integer for  your favorite color:\n");
		printf ("1 - red \n2 - orange \n3 - yellow \n4 - gold \n");
		printf ("5 - green \n6 - blue \n7 - purple \n8 - pink \n");
		printf ("9 - black \n10 - white\n\n");
		scanf  ("%i", &c);
		if (c > 0 && c < 11) {
			runColor = 0;
		}
		else {
			printf ("Invalid input!\n\n");
			runColor = 1;
		}
	}

	month_meaning(m);
	color_meaning(c);

	return 0;
}

void month_meaning (int x) 
{
	printf ("\n\n------------------------------------------------\n");
	switch (x)
	{
		case 1: 
			printf("Born in January, you're bold and alert!");
			break;
		case 2:
			printf("Born in February, you're lucky and loyal");
			break;
		case 3:
			printf("Born in March, you're naughty and genius!");
			break;
		case 4:
			printf("Born in April, you're caring and strong!");
			break;
		case 5:
			printf("Born in May, you're loving and practical!");
			break;
		case 6:
			printf("Born in June, you're romantic and curious!");
			break;
		case 7:
			printf("Born in July, you're adventurous and honest!");
			break;
		case 8:
			printf("Born in August, you're active and hardworking!");
			break;
		case 9:
			printf("Born in September, you're sensitive and pretty!");
			break;
		case 10:
			printf("Born in October, you're stylish and friendly!");
			break;
		case 11:
			printf("Born in November, you're nice and creative!");
			break;
		case 12:
			printf("Born in December, you're confident and free!");
			break;
		default:
			printf("Invalid input!");
			break;
	}
}

void color_meaning (int y)
{
	printf ("\n\nYour favorite color shows that\n");
	switch (y)
	{
		case 1:
			printf("you are action oriented with a deep need\n");
			printf("for physical fulfillment and to experience\n");
			printf("life through the five senses.\n");
			break;
		case 2:
			printf("you have a great need to be with people,\n");
			printf("to socialize with them, and be accepted\n");
			printf("and respected as a part of a group. You\n");
			printf("also have a need for challenges in your\n");
			printf("life, whether they are physical or social.\n");
			break;
		case 3:
			printf("you have a deep need for logical order\n");
			printf("in your everyday life and to be able to\n");
			printf("express your individuality by using your\n");
			printf("logical mind to inspire and create new\n");
			printf("ideas.\n");
			break;
		case 4:
			printf("you radiate charisma, personality, and\n");
			printf("individuality, making others feel relaxed\n");
			printf("and valued in your company.\n");
			break;
		case 5:
			printf("you have a deep need to belong, to love\n");
			printf("and be loved, and to feel safe and secure.\n");
			printf("You need acceptance and acknowledgement\n");
			printf("for the everyday things you do for others \n");
			printf("- just a 'thank you' is sufficient.\n");
			break;
		case 6:
			printf("you have a deep need to find inner peace\n");
			printf("and truth, to live your life according\n");
			printf("to your ideals and beliefs without having\n");
			printf("to change your inflexible viewpoint of\n");
			printf("life to satisfy others.\n");
			break;
		case 7:
			printf("you have a deep need for emotional\n");
			printf("security and to create order and perfection\n");
			printf("in all areas of your life, including\n");
			printf("your spiritual life. You also have a deep\n");
			printf("need to initiate and participate in\n");
			printf("humanitarian projects, helping others in\n");
			printf("need.\n");
			break;
		case 8:
			printf("you have a deep need to be accepted and\n");
			printf("loved unconditionally.\n");
			break;
		case 9:
			printf("you have a need for power and control in\n");
			printf("order to protect your own emotional\n");
			printf("insecurities.\n");
			break;
		case 10:
			printf("have a need for simplicity in your own life\n");
			printf("and to be independent and self-reliant so\n");
			printf("you do not need to depend on anyone else.\n");
			break;
	}
	printf("\n\n");
}

