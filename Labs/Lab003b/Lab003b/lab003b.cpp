/*
 Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is greater than b and otherwise leaves a and b unchanged. For example,
 int u = 2;
 int v = 3;
 int w = 4;
 int x = 1;
 sort2(u, v); // u is still 2, v is still 3
 sort2(w, x); // w is now 1, x is now 4
 */

/**
int a = b is setting a's VALUE to b's VALUE
int* a = &b is setting a's VALUE to the ADDRESS of b
int& a = b is setting a's ADDRESS to b's ADDRESS (a is a reference to b)
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int u = 2;
int v = 3;
int w = 4;
int x = 1;

/** Attempt to create a void function */
void sort2(int& a, int& b)
{
	
}



int main()
{
	cout << "u = 2" << endl << "v = 3" << endl;
	cout << "w = 4" << endl << "x = 1" << endl << endl;
	
	return 0;
}
