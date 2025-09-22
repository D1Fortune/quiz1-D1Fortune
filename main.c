
/******************************************************************************
Name: Dawens Fortune 
Term: Fall 2025
Course: COMP 350-003
Fall  2025

Quiz-1

*******************************************************************************/
/*
The program implements the guessing game
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
main function to start C application
*/
int main() {

	//how many guesses the user has made for the rounds
	int numGuesses[5];
	//user guess
	int guess;
	//secret number
	int secret;
	//loop control variable
	int i;
	//if correct guess
	if ( secret = guess){
		printf("You got it!\n");
		return 0;
	}
	//generate random seed
	int seed = rand();
	//guessing game a total of 5 times in a row
	for (i = 0; i < 5 ; i++ ) {

		printf("==========================\n");
		printf("CPU Says: Pick a number 1-10\n");
		printf("==========================\n");

		//generate the secret number between 1 and 10
		secret = rand() % 10 + 1;

		numGuesses[i] = 0;

		//loop until correct guess
		int correct = 0;
		while (correct == 0) {
			//ask for a guess
			printf("Make a guess: ");
			scanf("%d", &guess);

			if (guess > secret) {
				printf("No guess lower!\n");
			}
			else if (guess < secret) {
				printf("No guess higher!\n");
			}
			else {
				printf("You got it!\n");
				correct = 1;
			}

			numGuesses[i] += 1;

		}//end while
	}//end for

  printf("=================================================\n");
  printf("|Here are the results of your guessing abilities|\n");
  printf("=================================================\n");

  	//result of guessing game a total of 5 times in a row
	for (i = 0; i < 5; i++) {
		printf("Game %d took you %d guesses\n",i, guess);
       	}

	return 0;
}

/*
Answers:
1. 
In the worst case, It would take take us ten guesses to get the right number because we only have ten numbers to guess from.
2. 
If you are provided the error messages, the worst case is you have to guess have of the numbers going form the direction provide by the messages.
*/

