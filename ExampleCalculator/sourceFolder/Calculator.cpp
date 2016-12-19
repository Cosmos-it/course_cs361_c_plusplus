/*
 * Taban Cosmos
 */

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stack>
#include <string>
#include <utility>

#include "Calculator.h";

using namespace std;

void convertToLower(string& str){
   for(int i = 0; i <str.length(); i++){
	   str[i] = toupper(str[i]);
   }
}

bool isOperator(char ch) {
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		return true;
	else
		return false;
}

double performOperation(int op1, int op2, char op) {
	Calculator *cal = new Calculator();
	double ans = { 0.0 };
	switch (op) {

	case '-':
		ans = cal->subtract(op1, op2);
		break;
	case '/':
		ans = cal->divide(op2, op1);
		break;
	case '*':
		ans = cal->multiply(op2, op1);
		break;

	case '+':
		ans = cal->add(op2, op1);
		break;
	}
	return ans;
}

int returnValue(int size, string numbers[], const string& op1, int op1O) {
	for (int i = 0; i < size; i++) {
		string nums = numbers[i];
		if (op1 == nums) {
			op1O = i;
			break;
		}
	}
	return op1O;
}

void stringNumbers() {

	string numbers[] = { "zero", "one", "two", "three", "four", "five", "six",
			"seven", "eight", "nine" };
	string op1, op2 = "";
	int op1O = { 0 };
	int op2O = { 0 };

	puts("Enter single digit: e.g one: ");
	cin >> op1;
	puts("Enter single digit: e.g two: ");
	cin >> op2;
	puts("Your signs e.g + -:");
	char opt;
	cin >> opt;

	int size = sizeof(numbers) / sizeof(string);

	op1O = returnValue(size, numbers, (op1), op1O);
	op2O = returnValue(size, numbers, (op2), op2O);

	double ans = performOperation(op1O, op2O, opt);
	cout << op1O << " " << op2O;
	cout << "\nAnswer is: " << ans;

}

int main() {
	puts(
			"Choice to perform normal calculation\n or single-string calculations: ");
	char exp[1000], buffer[15];
	int i, op1, op2, len, j, x;
	stack<int> s;
	printf("Enter a Post fix Expression: ( e.g. 35 24 * )\n");
	try {
		gets(exp);
	} catch (int e) {
		cout << "error" << e << endl;
	}
	len = strlen(exp);
	j = 0;
	for (i = 0; i < len; i++) {
		if (exp[i] >= '0' && exp[i] <= '9') {
			buffer[j++] = exp[i];
		} else if (exp[i] == ' ') {
			if (j > 0) {
				buffer[j] = '\0';
				x = atoi(buffer);
				s.push(x);
				j = 0;
			}
		} else if (isOperator(exp[i])) {
			op1 = s.top();
			s.pop();
			op2 = s.top();
			s.pop();
			s.push(performOperation(op1, op2, exp[i]));
		}
	}

	printf("The result is %d\n", s.top());

	puts("\nNow perform single-digit string number");
	stringNumbers();

}

