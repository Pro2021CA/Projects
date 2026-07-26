

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main(){
   char str[] = "text here";

   unordered_map<char, string> morse;

morse['a'] = ".-";
morse['b'] = "-...";
morse['c'] = "-.-.";
morse['d'] = "-..";
morse['e'] = ".";
morse['f'] = "..-.";
morse['g'] = "--.";
morse['h'] = "....";
morse['i'] = "..";
morse['j'] = ".---";
morse['k'] = "-.-";
morse['l'] = ".-..";
morse['m'] = "--";
morse['n'] = "-.";
morse['o'] = "---";
morse['p'] = ".--.";
morse['q'] = "--.-";
morse['r'] = ".-.";
morse['s'] = "...";
morse['t'] = "-";
morse['u'] = "..-";
morse['v'] = "...-";
morse['w'] = ".--";
morse['x'] = "-..-";
morse['y'] = "-.--";
morse['z'] = "--..";

morse['0'] = "-----";
morse['1'] = ".----";
morse['2'] = "..---";
morse['3'] = "...--";
morse['4'] = "....-";
morse['5'] = ".....";
morse['6'] = "-....";
morse['7'] = "--...";
morse['8'] = "---..";
morse['9'] = "----.";

morse['.'] = ".-.-.-";
morse[','] = "--..--";
morse['?'] = "..--..";
morse['\''] = ".----.";
morse['!'] = "-.-.--";
morse['/'] = "-..-.";
morse['('] = "-.--.";
morse[')'] = "-.--.-";
morse['&'] = ".-...";
morse[':'] = "---...";
morse[';'] = "-.-.-.";
morse['='] = "-...-";
morse['+'] = ".-.-.";
morse['-'] = "-....-";
morse['_'] = "..--.-";
morse['"'] = ".-..-.";
morse['$'] = "...-..-";
morse['@'] = ".--.-.";
morse[' '] = "/";



    for(int i = 0; i < sizeof(str) / sizeof(str[0]); i++){
        cout << morse[str[i]] << " ";
    }

    return 0;
}
