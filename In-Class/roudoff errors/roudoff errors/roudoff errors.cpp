// roudoff errors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double price = 4.35;
	// should be 100 * price;
	int cents = 100 * price;
	// should be 100 * 4.35 = 435
	cout << cents << endl;
	// prints 434

	system("pause");

    return 0;
}

