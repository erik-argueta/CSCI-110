//
//  main.cpp
//  P7-2
//
//  Created by Erik Argueta on 2/9/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>

using namespace std;

double replace_if_greater(double *p, double x)
{
	if (*p > x)
	{
		cout << endl << "a has been replaced by b because " << *p << " is greater than " << x << endl;
		double temp = *p;
		*p = x;
		return temp;
	}
	
	else
	{
		return *p;
	}
}

int main()
{
	string ans;
	double a;
	double b;
	bool loop = true;
	
	while (loop)
	{
		cout << endl << "Please enter a value for a: ";
		cin >> a;
		
		cout << endl << "Please enter a value for b: ";
		cin >> b;
		
		cout << endl << "a = " << a << " " << "b = " << b << endl;
		
		replace_if_greater(&a, b);
		
		cout << endl << "a = " << a << " " << "b = " << b << endl;
		
		cout << endl << "Would you like to try again? [y/n] ";
		cin >> ans;
		
		if (ans == "y")
		{
			loop = true;
		}
		
		else
		{
			loop = false;
		}
	}
	return 0;
}
