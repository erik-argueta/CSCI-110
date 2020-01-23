//
//  main.cpp
//  scan project
//
//  Created by Erik Argueta on 1/10/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string word1;
    string word2;
    string word3;
    string word4;
    int total1 = 0;
    int total2 = 0;
    int total3 = 0;
    int total4 = 0;
    int counter = 0;
    int syl1 = 0;
    int syl2 = 0;
    int position1 = 0;
    int position2 = 0;
    const int COLUMNS = 2;
    
    cout << "Please enter four words:" << endl;
    
    
    cout << "1. ";
    cin >> word1;
    // word1
    {
        if (word1.substr(word1.length() - 1) == "e")
            {
                
                counter++;
                syl2++;
            }
            
            else
            {
                while (position1 < word1.length())
                {
                    string ch = word1.substr(position1, 2);
                    if (ch == "aa" || ch == "ee" || ch == "ii" || ch == "oo" || ch == "uu" || ch == "yy" || ch == "uy" || ch == "yu" || ch == "ae" || ch == "ea" || ch == "ai" || ch == "ia" || ch == "ao" || ch == "oa" || ch == "au" || ch == "ua" || ch == "ay" || ch == "ya" || ch == "ei" || ch == "ie" || ch == "eo" || ch == "oe" || ch == "eu" || ch == "ue" || ch == "ey" || ch == "ye" || ch == "io" || ch == "oi" || ch == "iu" || ch == "ui" || ch == "iy" || ch == "yi" || ch == "ou" || ch == "uo" || ch == "oy" || ch == "yo")
                    {
                        syl1++;
                        position1++;
                    }
                    else
                    {
                        position1++;
                    }
                }
                    
                while (position2 < word1.length())
                {
                    string ch2 = word1.substr(position2, 1);
                    
                    if (ch2 == "a" || ch2 == "e" || ch2 == "i" || ch2 == "o" || ch2 == "u" || ch2 == "y")
                    {
                        syl2++;
                        position2++;
                    }
                    else
                    {
                        position2++;
                    }
                }
            }

        if (syl1 > 0)
        {
            
            counter++;
            total1 = ((syl1 + syl2) - 2);
        }
        else
        {
            
            counter++;
            total1 = syl2;
        }
    }
    
    syl1 = 0;
    syl2 = 0;
    counter = 0;
    position1 = 0;
    position2 = 0;
    
    cout << "2. ";
    cin >> word2;
    // Word2
    {
        if (word2.substr(word2.length() - 1) == "e")
            {
                
                counter++;
                syl2++;
            }
            
            else
            {
                while (position1 < word2.length())
                {
                    string ch = word2.substr(position1, 2);
                    if (ch == "aa" || ch == "ee" || ch == "ii" || ch == "oo" || ch == "uu" || ch == "yy" || ch == "uy" || ch == "yu" || ch == "ae" || ch == "ea" || ch == "ai" || ch == "ia" || ch == "ao" || ch == "oa" || ch == "au" || ch == "ua" || ch == "ay" || ch == "ya" || ch == "ei" || ch == "ie" || ch == "eo" || ch == "oe" || ch == "eu" || ch == "ue" || ch == "ey" || ch == "ye" || ch == "io" || ch == "oi" || ch == "iu" || ch == "ui" || ch == "iy" || ch == "yi" || ch == "ou" || ch == "uo" || ch == "oy" || ch == "yo")
                    {
                        syl1++;
                        position1++;
                    }
                    else
                    {
                        position1++;
                    }
                }
                    
                while (position2 < word2.length())
                {
                    string ch2 = word2.substr(position2, 1);
                    
                    if (ch2 == "a" || ch2 == "e" || ch2 == "i" || ch2 == "o" || ch2 == "u" || ch2 == "y")
                    {
                        syl2++;
                        position2++;
                    }
                    else
                    {
                        position2++;
                    }
                }
            }
        if (syl1 > 0)
        {
            
            counter++;
            total2 = ((syl1 + syl2) - 2);
        }
        else
        {
            
            counter++;
            total2 = syl2;
        }
    }
    
    syl1 = 0;
    syl2 = 0;
    counter = 0;
    position1 = 0;
    position2 = 0;
    
    cout << "3. ";
    cin >> word3;
    
    // word3
    {
        if (word3.substr(word3.length() - 1) == "e")
            {
                
                counter++;
                syl2++;
            }
            
            else
            {
                while (position1 < word3.length())
                {
                    string ch = word3.substr(position1, 2);
                    if (ch == "aa" || ch == "ee" || ch == "ii" || ch == "oo" || ch == "uu" || ch == "yy" || ch == "uy" || ch == "yu" || ch == "ae" || ch == "ea" || ch == "ai" || ch == "ia" || ch == "ao" || ch == "oa" || ch == "au" || ch == "ua" || ch == "ay" || ch == "ya" || ch == "ei" || ch == "ie" || ch == "eo" || ch == "oe" || ch == "eu" || ch == "ue" || ch == "ey" || ch == "ye" || ch == "io" || ch == "oi" || ch == "iu" || ch == "ui" || ch == "iy" || ch == "yi" || ch == "ou" || ch == "uo" || ch == "oy" || ch == "yo")
                    {
                        syl1++;
                        position1++;
                    }
                    else
                    {
                        position1++;
                    }
                }
                    
                while (position2 < word3.length())
                {
                    string ch2 = word3.substr(position2, 1);
                    
                    if (ch2 == "a" || ch2 == "e" || ch2 == "i" || ch2 == "o" || ch2 == "u" || ch2 == "y")
                    {
                        syl2++;
                        position2++;
                    }
                    else
                    {
                        position2++;
                    }
                }
            }
        if (syl1 > 0)
        {
            
            counter++;
            total3 = ((syl1 + syl2) - 2);
        }
        else
        {
            
            counter++;
            total3 = syl2;
        }
    }
    
    syl1 = 0;
    syl2 = 0;
    counter = 0;
    position1 = 0;
    position2 = 0;
    
    cout << "4. ";
    cin >> word4;
    
    // word4
    {
        if (word4.substr(word4.length() - 1) == "e")
            {
                
                counter++;
                syl2++;
            }
            
            else
            {
                while (position1 < word4.length())
                {
                    string ch = word4.substr(position1, 2);
                    if (ch == "aa" || ch == "ee" || ch == "ii" || ch == "oo" || ch == "uu" || ch == "yy" || ch == "uy" || ch == "yu" || ch == "ae" || ch == "ea" || ch == "ai" || ch == "ia" || ch == "ao" || ch == "oa" || ch == "au" || ch == "ua" || ch == "ay" || ch == "ya" || ch == "ei" || ch == "ie" || ch == "eo" || ch == "oe" || ch == "eu" || ch == "ue" || ch == "ey" || ch == "ye" || ch == "io" || ch == "oi" || ch == "iu" || ch == "ui" || ch == "iy" || ch == "yi" || ch == "ou" || ch == "uo" || ch == "oy" || ch == "yo")
                    {
                        syl1++;
                        position1++;
                    }
                    else
                    {
                        position1++;
                    }
                }
                    
                while (position2 < word4.length())
                {
                    string ch2 = word4.substr(position2, 1);
                    
                    if (ch2 == "a" || ch2 == "e" || ch2 == "i" || ch2 == "o" || ch2 == "u" || ch2 == "y")
                    {
                        syl2++;
                        position2++;
                    }
                    else
                    {
                        position2++;
                    }
                }
            }
        if (syl1 > 0)
        {
            
            counter++;
            total4 = ((syl1 + syl2) - 2);
        }
        else
        {
            
            counter++;
            total4 = syl2;
        }
    }
    cout << endl << endl;
    
    
     
    
    // Print the table header
    
    for (int column_header = 1; column_header < COLUMNS; column_header++)
    {
        cout << "Words:" << setw(20) << "Syllable(s):";
    }
    cout << endl;
    for (int column_header = 1; column_header < COLUMNS; column_header++)
    {
        cout << "__________________________";
    }
    cout << endl << endl;
    
    // Print Table Body
    for (int column_header = 1; column_header < COLUMNS; column_header++)
    {
        // Print table row
        for (int n = 2; n <= COLUMNS; n++)
        {
            cout << word1 << setw((20 - word1.length())) << total1 << endl << endl;
            cout << word2 << setw(20 - word2.length()) << total2 << endl << endl;
            cout << word3 << setw(20 - word3.length()) << total3 << endl << endl;
            cout << word4 << setw(20 - word4.length()) << total4 << endl << endl;
        }
        cout << endl;
    }
    return 0;
}
