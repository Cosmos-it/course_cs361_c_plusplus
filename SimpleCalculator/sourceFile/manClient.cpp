/*
 * manClient.cpp
 *
 *  Created on: Oct 10, 2016
 *      Author: Taban
 */

#include <iostream>

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

int main(int argc, const char * argv[]) {
	int a, b, choice = { 0 };
	puts("Simple calculator!");
	do {
		displayChoice();
		cin.clear();
		cin.ignore(256, '\n');
		cin >> choice;
		printf("Debugging choice: %d", choice);

		int result = { 0 };
		if (choice > 1 && choice <= 5) {
			switch (choice) {
			case 1:
				puts("\nEnter a");
				cin.clear();
				cin.ignore(256, '\n');
				cin >> a;
				printf("A: %d", a);

				puts("Enter b");
				cin.clear();
				cin.ignore(256, '\n');
				cin >> b;
				printf("B: %d", b);

				result = add(a, b);
				printf("Result: %d", result);
				printf("A: %d", a);

				break;

			case 2:
				puts("\nEnter a");
				cin.clear();
				cin.ignore();
				cin >> a;
				puts("Enter b");
				cin.clear();
				cin.ignore(256, '\n');
				cin >> b;
				result = subtract(a, b);
				printf("Result is: %d", result);
				break;

			case 3:
				puts("\nEnter a");
				cin.clear();
				cin.ignore();
				cin >> a;
				puts("Enter b");
				cin.clear();
				cin.ignore(256, '\n');
				cin >> b;
				result = multiply(a, b);
				printf("Result is: %d", result);
				break;
			case 4:
				puts("\nDivide\nEnter a");
				cin.clear();
				cin.ignore(256, '\n');
				cin >> a;
				puts("Enter b");
				cin.clear();
				cin.ignore();
				cin >> b;
				result = divide(a, b);
				printf("Result is: %d", result);
				break;

			default:
				break;
			}
		} else {
			puts("This choice does not exist");
			break;
		}

	} while (choice != -1);

	if (choice == -1)
		puts("Program shut Zzzz");

	return 0;

}
