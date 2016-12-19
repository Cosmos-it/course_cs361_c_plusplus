/*
 * Calculator.h
 *
 *  Created on: Oct 31, 2016
 *      Author: Taban
 */

#ifndef SOURCEFOLDER_CALCULATOR_H_
#define SOURCEFOLDER_CALCULATOR_H_

class Calculator {
public:
	int subtract(int a, int b){
		return a - b;
	}

	int multiply(int a, int b){
		return a * b;
	}

	int divide(int a, int b) {
		return a / b;
	}

	double add(int a, int b) {
		return a + b;
	}

	int mod(int a, int b) {
		return a % b;
	}
};

#endif /* SOURCEFOLDER_CALCULATOR_H_ */
