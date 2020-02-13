/*
 Write a program that carries out the following tasks:
	 Open a file with the name hello.txt.
	 Store the message “Hello, World!” in the file.
	 Close the file.
	 Open the same file again.
	 Read the message into a string variable and print it.
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	
	
	ifstream in_file;
	in_file.open("//Users/erik-argueta/Desktop/Chapter_8/P8-1/hello.txt");
	
	ofstream out_file;
	out_file.open("/Users/erik-argueta/Desktop/Chapter_8/P8-1/hello.txt");
	
	out_file << "Hello, World!" << endl;
	
	in_file.close();
	out_file.close();
	
	in_file.open("/Users/erik-argueta/Desktop/Chapter_8/P8-1/hello.txt");
	
	getline(in_file, line);
	
	in_file >> line;
	
	cout << line << endl;
	
	in_file.close();
	
	return 0;
}
