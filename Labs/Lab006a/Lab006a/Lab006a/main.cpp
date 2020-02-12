/*
Program Description: Runs through text file and prints only names on another file
Author: Erik Argueta
Input Variables: in_file, name, count, percent
Process Flow: scans through the input file and placed only names on the output file
Output Variables: Output file with only the names of babies and a rank of 153
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
Reads name info, prints the name if total >= 0, and adjusts the total.
@param in_file the input stream
@param total the total percentage that should still be processed
*/

void process_name(ifstream& in_file, ofstream& out_file, float& total)
{
	// Read a set of three values for the boy's name:
	string name;
	int count;
	float percent;
	in_file >> name >> count >> percent;

	if (in_file.fail()) { return; } // Check for failure after each input
	if (total > 0) { out_file << name << " "; }
	total = total - percent;
}

int main()
{
	ifstream in_file;
	in_file.open("D:\\CSCI110\\Labs\\Lab006a\\babynames.txt"); // "D:\\babynames.txt"
	if (in_file.fail()) { return 0; } // Check for failure after opening

	ofstream out_file;
	out_file.open("D:\\CSCI110\\Labs\\Lab006a\\OUTPUT.txt"); // "D:\\OUTPUT.txt"

	float boy_total = 50;
	float girl_total = 50;

	cout << "Processing File..." << endl << endl;
	cout << "Processing 153 Records..." << endl << endl;

	while (boy_total > 0 || girl_total > 0) // To process each line
	{
		int rank;
		in_file >> rank;
		if (in_file.fail()) { return 0; }

		out_file << rank << " ";

		process_name(in_file, out_file, boy_total);
		process_name(in_file, out_file, girl_total);

		out_file << endl;
	}

	cout << "Process Complete!" << endl << endl;

	system("pause");
	return 0;
}
