// rand_function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;



int main()
{
	srand(time(0));

	for (int i = 1; i <= 50; i++)
	{
		int d1 = rand() % 6 + 1;
		int d2 = rand() % 6 + 1;
		cout << d1 << " " << d2 << endl;
	}

	cout << endl;

	system("pause");
    return 0;
}

