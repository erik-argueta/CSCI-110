// Argueta01.cpp : Defines the entry point for the console application.
//
/*
Program Description: Mainly calculates the sum, difference, quotient, difference, and comparison
Author: Erik Argueta
Input Variables: first, second
Process Flow: Applies addition, subtraction, multiplication, division, and comparison
Output Variables: Sum, Difference, Product, Quotient, and Comparison
*/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> // allows for abs() 

using namespace std;

int main()
{
	float first;
	float second;
	float total;
	float diff;
	float product;
	float quotient;
	float exponent;
	float root;
	string first_name;
	string last_name;
	string full_name;


	cout << "Please insert your first and last name: " << endl;
	cin >> first_name >> last_name; // remove need to enter two names
	full_name = first_name + " " + last_name;
	cout << "Welcome, " << full_name << "!" << endl;

	cout << endl;

	cout << "Please enter the first value: ";
	cin >> first;
	cout << "Please enter the second value: ";
	cin >> second;


	total = first + second;
	diff = first - second;
	product = first * second;
	quotient = first / second;
	exponent = pow(first, second);
	root = sqrt(first);


	cout << "Total is " << total << endl;
	cout << "Difference is " << diff << endl;
	cout << "Product is " << product << endl;
	cout << "Quotient is " << quotient << endl;
	cout << "Exponential is " << exponent << endl;
	cout << "Square Root is " << root << endl;

	if (first > second)
		cout << "First value is greater than the second value " << endl;
	else
		cout << "Second value is greater than the first value " << endl;

	cout << endl;

	system("pause");

	return 0;
}