// Function001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;



void sum(float first, float second)
{
	float sum = first + second;
	cout << "The total is " << sum << endl;
}

void diff(float first, float second)
{
	float diff = first - second;
	cout << "The difference is " << diff << endl;
}

void prod(float first, float second)
{
	float prod = first * second;
	cout << "The product is " << prod << endl;

}

void quot(float first, float second)
{
	float quot = first / second;
	cout << "The quotient is " << quot << endl;

}

void exchange(float& first, float& second)
{
	float temp;
	temp = first;
	first = second;
	second = temp;
}


int main()
{
	float first;
	float second;


	cout << "Please enter the first number: ";
	cin >> first;
	cout << "Please enter the second number: ";
	cin >> second;

	sum(first, second);
	diff(first, second);
	prod(first, second);
	quot(first, second);
	exchange(first, second);

	cout << "Value of first is " << first << endl;
	cout << "Value of second is " << second << endl;


	system("pause");

	return 0;
}

