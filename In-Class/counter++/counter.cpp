// counter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int counter = 0;
	int P;
	P = counter++; /* counter, THEN increments */

	counter++;
	cout << "Counter = " << counter << endl;
	cout << "P = " << P << endl;
	
	counter = 0; /* established to be 0 */
	P = ++counter; /* increments, THEN counter */
	cout << "P = " << P << endl;
	system("pause");
    return 0;
}

