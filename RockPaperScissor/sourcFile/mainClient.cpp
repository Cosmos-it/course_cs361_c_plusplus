/*
 * mainClient.cpp
 *
 *  Created on: Oct 14, 2016
 *      Author: Taban Cosmos
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int fibonacciRandomNumber(int n);
void userInputs(int userChoice);
void computerInput(int computerChoice);

int main(int argc, const char* argv[]) {

	int userChoice, computerChoice = { 0 };
	unsigned seed = time(0);
	srand(seed);

	int wins = 0;
	int draws = 0;
	int computerWins = 0;

	puts("Start playing the game!");
	puts("0: Scissor ");
	puts("1: Rock ");
	puts("2: Paper ");
	puts("-1: To exit");

	do {
		cin >> userChoice;

		if (userChoice != -1 || userChoice >= 2) {
			userInputs(userChoice);
			//Now create the computer randomaizations
			int num = rand() % 3 + 1; //0 2 1
			computerChoice = fibonacciRandomNumber(num);

			computerInput(computerChoice);

			if (userChoice == computerChoice) {
				draws++;
				cout << "It is a tie\n";
			} else if ((userChoice == 0 && computerChoice == 1)
					|| (userChoice == 1 && computerChoice == 0)
					|| (userChoice == 2 && computerChoice == 2)) {
				cout << "You win!\n";
				wins++;
			} else {
				cout << "Computer win, you suck ;!\n";
				computerWins++;
			}
		}

	} while (userChoice != -1);

	if (userChoice == -1) {
		puts("\nGame ended ");
		cout << "\nHere are your results: ";
		cout << "\nYour wins : " << wins;
		cout << "\nComputer wins : " << computerWins;
		cout << "\nTies : " << draws;
	}
	return 0;
}

int fibonacciRandomNumber(int n) {
	//creates a random sequence to verify the
	//
	if (n == 1) {
		return 1;
	} else {
		return n = ((n - 1) % 10) * (n - 2);
	}
}

//User choice input
void userInputs(int userChoice) {
	if (userChoice == 0)
		puts("You choose Scissor\n");
	if (userChoice == 1)
		puts("You choose Rock\n");
	if (userChoice == 2)
		puts("You choose Paper\n");
}

//Computer random choice input
void computerInput(int computerChoice) {
	if (computerChoice == 0)
		puts("Computer choose Scissor\n");
	if (computerChoice == 1)
		puts("Computer choose Rock\n");
	if (computerChoice == 2)
		puts("Computer choose Paper\n");
}

