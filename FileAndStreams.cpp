// FileAndStreams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    

    ifstream file_("Text_input.txt");

    int wordCount{}, totalWordLength{}, shortest{1000}, longest{0};

    string line{}, shortestLine{}, longestLine{};
    if (file_.is_open()) {

        while (file_ >> line) {
            wordCount++;
            totalWordLength += line.length();
            
            if (line.length() < shortest) {
                shortest = line.length();
                shortestLine = line;
            }

            if (line.length() > longest) {
                longest = line.length();
                longestLine = line;
            }
        }

        file_.close();
    }
    else {
        cout << "File is not open" << endl;
    }

    cout << "There are " << wordCount << " words in the file." << endl;
    cout << "The shortest word was \"" << shortestLine << "\" with " << shortest << " character(s)" <<endl;
    cout << "The longest word was \"" << longestLine << "\" with " << longest << "character(s)." << endl ;
    cout << "The average length was " << totalWordLength / wordCount << " character(s)" << endl;


        

}

