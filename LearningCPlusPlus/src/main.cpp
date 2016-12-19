/*
 * main.cpp
 *
 *  Created on: Dec 7, 2016
 *      Author: Taban
 */


#include <cstdio>

int main(int argc, char **argv)
{
	int x = 7; //value
	int *ip = &x;// value pointer
	int &y = x; //value Reference
	int c = 10;
	int xp = 10;

	printf("%d\n", xp);
	printf("%d\n", c);
	printf("%d\n", c);
	printf("x %d\n ", x);
	printf("Address pointer *ip %d\n ", *ip);
	printf("Value reference %d\n ", y);
	printf("Test");
	printf("Another test to compile");
	printf("Another test to compile");


}


