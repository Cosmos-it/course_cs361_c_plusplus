/*
 * mainClient.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: Taban
 */

#include <regex>
#include <iterator>
#include <iostream>
#include <string>

using namespace std;

// Pattern search.

int x = 1;
int *y = &x;

void testFunction();
void testFunctionDigits();
void singleSearch(const string& s, size_t items, string& ss, int counts);

int main() {
	cout << x;
	cout << "Pointer *y" << *y;
	int counts = 0;
	string s;
	size_t items = { 0 };
	string ss;

	cout << "Enter a string: ";
	getline(cin, s);
	cout << "Enter char to search";
	cin >> ss;

	singleSearch(s, items, ss, counts);
	//	patternSearch(s, items, ss, counts);


//	testFunction();
//	testFunctionDigits();

	return 0;
}

void testFunction()
{
	const std::string s = "Qu aas asas as";

	regex words_regex("[a-zA-Z]");
	auto words_begin = sregex_iterator(s.begin(), s.end(), words_regex);
	auto words_end = sregex_iterator();

	std::cout << "Found "
			<< distance(words_begin, words_end)
			<< " words:\n";

	for (sregex_iterator i = words_begin; i != words_end; ++i) {
		smatch match = *i;
		std::string match_str = match.str();
		std::cout << match_str << '\n';
	}
}


void singleSearch(const string& s, size_t items, string& ss, int counts) {
	for (int i = 0; i < s.length(); i++) {
		while ((items = s.find(ss, i)) != string::npos) {
			counts++;
			i = items + 1;
			cout << i;
		}
	}
	cout << "Occurs " << counts << " times\n";
}



