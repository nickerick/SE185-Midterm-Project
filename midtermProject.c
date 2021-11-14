/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
1- Nicholas Erickson - Role: Program creator and debugger - Participation: 100%
															                                     -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*----------------------------------------------------------------------------
-	                            Functions Prototypes                                   -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermProject.c -o proj

/*----------------------------------------------------------------------------
-								Implementation								                               -
-----------------------------------------------------------------------------*/
int main()
{
	int randSeedInput;
	int quizChoice;
	int quizAttempts = 0;
	int quizComplete = 0; // 0 is incomplete, 1 is complete
	double globalTotalScores = 0;
	double globalQuizAttempts = 0;
	double currentQuizScore = 0;
	double totalScores = 0;
	char continueQuiz = 'y';
	char userCharInput;
	char userStringInput[20];
		
	printf("\e[1mQuiz Time\e[0m\n");
	printf("\nPlease enter a number between 1 - 9 to randomly choose a quiz!\n");
	printf("Input: ");
	scanf("%d", &randSeedInput);
	
	//Seeding random quiz selection
	srand(time(0));
	quizChoice = rand() % (3) + 1;
	
	// Loop that gives and grades quizzes
	while(1) {

        // Quiz 1
		if (quizChoice == 1) {
			while(quizComplete == 0) {
				printf("\n\e[1mQuiz 1\e\[0m\n");
				printf("\n\e[1mQuestion 1\e\[0m\n");
				printf("True or False\n");
				printf("\nprintf(\"Hello World!);\n");
				printf("\nThere are no errors in the line of code above. T or F.\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'F') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 2\e\[0m\n");
				printf("\nint exampleArray[] = {1, 2, 3, 4}\n");
				printf("What does exampleArray[2] equal?\n");
				printf("A. 1 \nB. 2\nC. 3\nD. 4\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'C') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 3\e\[0m\n");
				printf("Fill in the blank: The ______ function outputs text to the screen.\n");
				printf("Answer: ");
				scanf(" %s", &userStringInput);
				if (strcmp("printf", userStringInput) == 0) {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				quizAttempts = quizAttempts + 1;
				totalScores = totalScores + currentQuizScore;
				globalQuizAttempts = globalQuizAttempts + 1;
				globalTotalScores = globalTotalScores + currentQuizScore;
				if (currentQuizScore == 15) {
					printf("\nYou got all questions correct!\n");
					printf("It took you %d attempt(s) with an average score of %.2lf%%\n", quizAttempts, (totalScores / (15 * quizAttempts)) * 100);
					quizComplete = 1;
				} else {
					printf("\nQuiz failed! Try again!\n");
				}
			currentQuizScore = 0;		
			}
			quizComplete = 0;
			totalScores = 0;
			quizAttempts = 0;
			quizChoice = 0;
		
		// Quiz 2	
		} else if (quizChoice == 2) {
			
			while(quizComplete == 0) {
				printf("\n\e[1mQuiz 2\e\[0m\n");
				printf("\n\e[1mQuestion 1\e\[0m\n");
				printf("True or False\n");
				printf("\nint x = 9;\nint y = 14;\nint calculation = x + y + x;\n");
				printf("\nint calculation is equal to 32. T or F.\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'T') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 2\e\[0m\n");
				printf("\nfor(int i = 0; i < 5; ++i) {\n	totalSum = totalSum + i\n}\n\n");
				printf("How many times does the for loop above iterate?\n");
				printf("A. 0\nB. 4\nC. 5\nD. 6\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'C') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 3\e\[0m\n");
				printf("Fill in the blank: exampleArray[2] refers to the _____ index of exampleArray.\n");
				printf("Answer: ");
				scanf(" %s", &userStringInput);
				if (strcmp("third", userStringInput) == 0) {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				quizAttempts = quizAttempts + 1;
				totalScores = totalScores + currentQuizScore;
				globalQuizAttempts = globalQuizAttempts + 1;
				globalTotalScores = globalTotalScores + currentQuizScore;
				if (currentQuizScore == 15) {
					printf("\nYou got all questions correct!\n");
					printf("It took you %d attempt(s) with an average score of %.2lf%%\n", quizAttempts, (totalScores / (15 * quizAttempts)) * 100);
					quizComplete = 1;
				} else {
					printf("\nQuiz failed! Try again!\n");
				}
			currentQuizScore = 0;		
			}
			quizComplete = 0;
			quizAttempts = 0;
			totalScores = 0;
			quizChoice = 0;
		// Quiz 3	
		} else if (quizChoice == 3) {
			
			while(quizComplete == 0) {
				printf("\n\e[1mQuiz 3\e\[0m\n");
				printf("\n\e[1mQuestion 1\e\[0m\n");
				printf("True or False\n");
				printf("\nint a = 2;\nint b = 2.2\nint output;\noutput = a * b;\n");
				printf("\nint output is equal to 4.4. T or F.\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'F') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 2\e\[0m\n");
				printf("\n int x = 1, y = 3;\nint sum = x + y;\n\nwhile(sum < 6) {\n	printf(\"Nice!\\n\");\n}\n");
				printf("\nHow many times does the while loop iterate through?\n");
				printf("A. 0\nB. 1\nC. 2\nD. infinite\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'D') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 3\e\[0m\n");
				printf("Fill in the blank: The ____ data type is used to declare string variables.\n");
				printf("Answer: ");
				scanf(" %s", &userStringInput);
				if (strcmp("char", userStringInput) == 0) {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				quizAttempts = quizAttempts + 1;
				totalScores = totalScores + currentQuizScore;
				globalQuizAttempts = globalQuizAttempts + 1;
				globalTotalScores = globalTotalScores + currentQuizScore;
				if (currentQuizScore == 15) {
					printf("\nYou got all questions correct!\n");
					printf("It took you %d attempt(s) with an average score of %.2lf%%\n", quizAttempts, (totalScores / (15 * quizAttempts)) * 100);
					quizComplete = 1;
				} else {
					printf("\nQuiz failed! Try again!\n");
				}
			currentQuizScore = 0;		
			}
			quizComplete = 0;
			totalScores = 0;
			quizAttempts = 0;
			quizChoice = 0;
		}
		
		// Asks user if they want another quiz or quit. If quit, shows total attempts and overall score.
		printf("Would you like to take another quiz? Please type y or n: ");
		scanf(" %c", &continueQuiz);
		if (continueQuiz == 'y') {
			printf("Would you like to take quiz 1, 2, or 3? ");
			scanf("%d", &quizChoice);
		} else {
			printf("\nYou took a total of %.0lf quizzes with an overall average of %.2lf%%!", globalQuizAttempts, (globalTotalScores / (15 * globalQuizAttempts)) * 100);
			break;
		}
		
	}
	
			

    return 0;
}

