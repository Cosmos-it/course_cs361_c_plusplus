/*
 * manClient.cpp
 *
 *  Created on: Oct 10, 2016
 *      Author: Taban Cosmos
 */

#include <iostream>
#include <string>
#include <sstream>
#include "calculatorFunction.h";

using namespace std;

void displayChoice() {
	puts("\n\nCalculator option.");
	puts("1: For add!");
	puts("2: For subtraction!");
	puts("3: For multiply!");
	puts("4: For division!");
	puts("5: For modulus!");
	puts("Enter -1 to exit.");
}

int input(int choice) {
	while (!(cin >> choice)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 0;
	}
	return choice;
}

int main(int argc, const char * argv[]) {
	int a, b = { 0 };
	int choice = { 0 };

	puts("Simple calculator!");
	do {
		displayChoice();
		cout << "Do calculations: Choose!" << endl;

		choice = input(choice);
		if (choice == -1 || choice <= 5) {
			int result = { 0 };

			switch (choice) {
			case 1:
				puts("\nAddition..\nEnter a");
				a = input(a);
				printf("A: %d\n", a);

				puts("Enter b");
				b = input(b);
				printf("B: %d\n", b);

				result = add(a, b);
				printf("Result:= %d", result);
				break;

			case 2:
				puts("\nSubtraction...\nEnter a");
				a = input(a);
				printf("A: %d\n", a);

				puts("Enter b");
				b = input(b);
				result = subtract(a, b);
				printf("Result is: %d", result);
				break;

			case 3:
				puts("\nMultipl...\nEnter a");
				a = input(a);
				printf("A: %d\n", a);

				puts("Enter b");
				b = input(b);
				result = multiply(a, b);
				printf("Result is: %d", result);
				break;
			case 4:
				puts("\nDivide...\nEnter a");
				a = input(a);
				printf("A: %d\n", a);

				puts("Enter b");
				b = input(b);
				result = divide(a, b);
				printf("Result is: %d", result);
				break;

			case 5:
				puts("\nModulus...\nEnter a");
				a = input(a);
				printf("A: %d\n", a);

				puts("Enter b");
				b = input(b);
				result = mod(a, b);
				printf("Result is: %d", result);
				break;

			default:
				break;
			}
		} else {
			puts("Choice is between 1 to 5");
		}
	} while (choice != -1);

	if (choice == -1)
		puts("Program shut Zzzz");

	return 0;

}

