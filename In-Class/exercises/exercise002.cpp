// exercise002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	string first;
	string second;
	string initials;

	cout << "Enter your first name: ";
	cin >> first;
	cout << "Enter your significant other's first name: ";
	cin >> second;
	initials = first.substr(0, 1) + "&" + second.substr(0, 1);
	cout << initials << endl;
	
	system("pause");
    return 0;
}

