/* 
random program for creating text like

t
th
thi
this
thi
th
t
*/


#include <iostream>
#include <unordered_map>

using namespace std;
int main(){
    char str[] = "the text";
    
    unordered_map<int32_t, string> strings;
    string result = "";
    
    for(int i = 0; i < sizeof(str) / sizeof(str[0]) - 1; i++){
        result += str[i];
        if(str[i] == ' '){
            continue;
        }
        strings[i] = result;
        cout << result << endl;
    }
    for(int i = sizeof(str) / sizeof(str[0]) - 3; i >= 0; i--){
        if(strings.find(i) == strings.end()){continue;}
        cout << strings[i] << endl;
    }

    return 0;
}
