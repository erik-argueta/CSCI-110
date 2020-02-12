/*
 Write a function that receives two pointers and sorts the values to which they point.
 void sort2(double* p, double* p)
 
 If you call sort2(&x, &y) then x <= y after the call.
 */

#include <iostream>

using namespace std;

void sort2 (float* a, float* b)
{
	if (*a > *b)
	{
		swap (a, b);
		cout << "x = " << *a << " y = " << *b << endl;
	}
	
	else
	{
		cout << "Nothing has changed." << endl;
	}
}

int main()
{
	float x;
	float y;
	
	cout << "Please enter a value for x: ";
	cin >> x;
	
	cout << "Please enter a value for y: ";
	cin >> y;
	
	sort2(&x, &y);
	
	return 0;
}
