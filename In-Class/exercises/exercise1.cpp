// exercise1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float cost_car1;
	float cost1;
	float mpg1;
	float maintenance1;
	float insurance1;

	cout << "Please input the cost of Car 1:" << endl;
	cin >> cost1;
	cout << "Please input the total Miles per Gallon of Car 1:" << endl;
	cin >> mpg1;
	cout << "Please input the cost of Car 1's maintenance:" << endl;
	cin >> maintenance1;
	cout << "Please input the cost of Car 1's insurance:" << endl;
	cin >> insurance1;
	cout << " " << endl;

	float cost_car2;
	float cost2;
	float mpg2;
	float maintenance2;
	float insurance2;

	cout << "Please input the cost of Car 2:" << endl;
	cin >> cost2;
	cout << "Please input the total Miles per Gallon of Car 2:" << endl;
	cin >> mpg2;
	cout << "Please input the cost of Car 2's maintenance:" << endl;
	cin >> maintenance2;
	cout << "Please input the cost of Car 2's insurance:" << endl;
	cin >> insurance2;
	cout << " " << endl;

	const float YEARS = 10;
	const float COST_PER_GALLON = 4;
	const float MILES_PER_YEAR = 15000;

	cost_car1 = cost1 + mpg1 + maintenance1 + insurance1 + (((MILES_PER_YEAR/mpg1)*COST_PER_GALLON)*YEARS);
	cost_car2 = cost2 + mpg2 + maintenance2 + insurance2 + (((MILES_PER_YEAR / mpg2) * COST_PER_GALLON) * YEARS);

	cout << "The toal cost of Car 1 is $" << cost_car1 << endl;
	cout << "The total cost of Car 2 is $" << cost_car2 << endl;

	if (cost_car1 > cost_car2)
		cout << "Car 2 the better buy" << endl;
	else
		(cout << "Car 1 is the better buy" << endl);

	system("pause");
    return 0;
}

