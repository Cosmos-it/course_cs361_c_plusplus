/*
 * main.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: Taban
 */

#include <iostream>
#include <string>

using namespace std;

void getChar();

int main() {
	getChar();
}


void getChar()
{
	char question[] = "Please, enter your first name: ";
	  char greeting[] = "Hello, ";
	  char yourname [80];
	  cout << question;
	  cin >> yourname;
	  cout << greeting << yourname << "!";
}





