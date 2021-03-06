// Elevator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;




int main()
{
	int floor;
	cout << "Floor: ";
	cin >> floor;

	if (floor == 13)
	{
		cout << "There is no thirteenth floor." << endl;
		system("pause");
		return 1;
	}
	if (floor <= 0 || floor > 20)
	{
		cout << "Floor must be between 0 and 20." << endl;
		system("pause");
		return 1;
	}
		
	if (cin.fail())
	{
		cout << "Error: Not an integer." << endl;
		system("pause");
		return 1;
	}

	int actual_floor;
	if (floor > 13)
	{
		actual_floor = floor - 1;
		cout << "The elevator will travel to the actual floor " << actual_floor << endl;
	}
	else
	{
		actual_floor = floor;
		cout << "The elevator will travel to the actual floor " << actual_floor << endl;
	}

	system("pause");
	return 0;
}

