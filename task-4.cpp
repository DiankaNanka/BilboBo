#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

string changeCase(string consoleInputString) {
   
     string result;
     for (int i=0; i < consoleInputString.length(); i++) 
     {
     if (consoleInputString[i] == 'A' 
        || consoleInputString[i] == 'E'
        || consoleInputString[i] == 'I' 
        || consoleInputString[i] == 'O'
        || consoleInputString[i] == 'U'
        || consoleInputString[i] == 'Y'
        ) {
           result += tolower(consoleInputString[i]);
          } else {
           result += consoleInputString[i];
          } 
     }
     return result;
}
int main() {  
    string consoleInputString;
    getline(cin, consoleInputString);
    cout << changeCase(consoleInputString);

return 0;
}
