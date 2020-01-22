/*

*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int u = 2;
int v = 3;
int w = 4;
int x = 1;
int place_holder1;
int place_holder2;
string input_a;
string input_b;

int digit1 (string input_a)
{
	if (input_a == "u") return 2;
	if (input_a == "v") return 3;
	if (input_a == "w") return 4;
	if (input_a == "x") return 1;
	return 0;
}

int digit2 (string input_b)
{
	if (input_b == "u") return 2;
	if (input_b == "v") return 3;
	if (input_b == "w") return 4;
	if (input_b == "x") return 1;
	return 0;
}


/** Attempt to create a void function */
void sort2(int digit1, int digit2)
{
	if (digit1 > digit2)
	{
		swap(digit1, digit2);
		cout << input_a << " = " << digit1 << endl;
		cout << input_b << " = " << digit2 << endl;
		
		
	}
	else
	{
		cout << "u = " << u << endl << "v = " << v << endl;
		cout << "w = " << w << endl << "x = " << x << endl << endl;
		cout << "Nothing has changed" << endl;
	}
}



int main()
{
	cout << "u = " << u << endl << "v = " << v << endl;
	cout << "w = " << w << endl << "x = " << x << endl << endl;
	
	cout << "Please enter two variables: " << endl;
	
	cout << "1. ";
	cin >> input_a;
	digit1(input_a);
	
	cout << "2. ";
	cin >> input_b;
	digit2(input_b);
	
	cout << endl;

	sort2(digit1(input_a), digit2(input_b));

	return 0;
}
