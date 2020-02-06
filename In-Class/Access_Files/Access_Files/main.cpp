/*
Lab 6A
Need to read text file and program needs to read the files(?)
*/

//#include "stdafx.h"
#include <iostream>
#include <fstream> // Step 1 // To look for files?
#include <string>
#include <iomanip>

using namespace std;


int main()
{
	//ifstream in_file; // Step 2 -- Declares input variable // Step 14 -- comment line out
	ofstream out_file; // Step 9 --  Declares Output variable
	//in_file.open("F:\\input.txt"); // Step 3 -- Locates designated file // Step 15 -- comment line out

	cout << "Please enter the file name: "; // Step 16
	string filename; // Step 17
	cin >> filename; // Step 18
	ifstream in_file; // Step 19
	in_file.open(filename); // Step 20 -- User must insert "F:\\input.txt"
							// MAC -> User must insert /Volumes/AMERIKA/input.txt

	if (in_file.fail()) // Step 13.1 -- Check for faliure after opening // Step 13.2 -- Rename file input.txt -> input.dat
	{
		cout << "File not found" << endl;
		//system("pause");
		return 1;
	}

	out_file.open("F:\\output.txt"); // Step 10 // Locates desigated file

	string name; // Step 4
	
	double value; // Step 5
	
	// in_file >> name >> value; // Step 6 // Step 12.1 -- Remove line and insert While loop

	while (in_file >> name >> value) // Step 12.2 // Insert Whie loop
	{
		cout << "name: " << name << " value: " << value << endl; // Step 7 // Output
		out_file << name << " " << value << endl; // Step 11
	}

	in_file.close();

	//system("pause");

    return 0;
}

