// Do_While.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float total = 0;
	int count = 0;
	float avg = 0;
	int i = 0;

	do
	{
		total = total + i;
		count = count + 1;
		avg = total / count;
		i = i + 1;
		cout << "i = " << i << endl;
	} while (i < 10);

	cout << "total is " << total << endl;
	cout << "average is " << avg << endl;

	system("pause");
    return 0;
}

