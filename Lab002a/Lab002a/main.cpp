/*
Program Description: Determines numerical score to letter grade
Program Author: Erik Argueta
Variable Inputs: letter_grade
Process Flow: Prints numerical score based on the letter grade inputted
Variable Outputs: Numerical score for the letter grade
*/
// #include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    string letter_grade;
    float final_grade;
    bool retry = true;


    while (retry)
    {
        cout << "Please enter a letter grade, Q to quit: ";
        cin >> letter_grade;

        if (letter_grade == "Q") {
            retry = false;
        }
        else if (letter_grade == "A" || letter_grade == "A+") {
            final_grade = 4.0;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "A-") {
            final_grade = 3.7;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "B+") {
            final_grade = 3.3;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "B") {
            final_grade = 3.0;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "B-") {
            final_grade = 2.7;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "C+") {
            final_grade = 2.3;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "C") {
            final_grade = 2.0;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "C-") {
            final_grade = 1.7;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "D+") {
            final_grade = 1.3;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "D") {
            final_grade = 1.0;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "D-") {
            final_grade = 0.7;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "F") {
            final_grade = 0.0;
            cout << "The numeric value is: " << final_grade << endl;
        }
        else if (letter_grade == "F+" || "F-") {
            final_grade = 0.0;
            cout << "The numeric value is: " << final_grade << endl;
        }
    }

    // system("pause");
    return 0;

}
