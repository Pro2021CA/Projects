/******************************************************************************

                              Morse Code decipherer (W.I.P.)
                              Made in C++ by Pro2021CA

*******************************************************************************/

/*
Start by placing the desired morse code inside str variable.
the morse must be in the format using - and . for the characters and / for spaces.
Now you can compile and run the code.

Later I might add input for the desired morse rather than using a constant.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
    char str[] = "morse code here";
    
    // map for decoding morse
    unordered_map<string, string> morse;
    morse["-----"] = "0";
    morse[".----"] = "1";
    morse["..---"] = "2";
    morse["...--"] = "3";
    morse["....-"] = "4";
    morse["....."] = "5";
    morse["-...."] = "6";
    morse["--..."] = "7";
    morse["---.."] = "8";
    morse["----."] = "9";
    morse[".-"] = "A";
    morse["-..."] = "B";
    morse["-.-."] = "C";
    morse["-.."] = "D";
    morse["."] = "E";
    morse["..-."] = "F";
    morse["--."] = "G";
    morse["...."] = "H";
    morse[".."] = "I";
    morse[".---"] = "J";
    morse["-.-"] = "K";
    morse[".-.."] = "L";
    morse["--"] = "M";
    morse["-."] = "N";
    morse["---"] = "O";
    morse[".--."] = "P";
    morse["--.-"] = "Q";
    morse[".-."] = "R";
    morse["..."] = "S";
    morse["-"] = "T";
    morse["..-"] = "U";
    morse["...-"] = "V";
    morse[".--"] = "W";
    morse["-..-"] = "X";
    morse["-.--"] = "Y";
    morse["--.."] = "Z";


    // get individual morse characters
    stringstream ss(str);
    string token;

    while (ss >> token) {
        // add a space if its the end of a word otherwise send the appropriate character
        if (token == "/") {
            cout << ' ';
        } else {
            cout << morse[token];
        }
    }
    return 0;
}
