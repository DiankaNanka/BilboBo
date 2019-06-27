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
        ) {
           result += tolower(consoleInputString[i]);
          } else {
           result += consoleInputString[i];
          } 
     }
     return result;
}

int main() {  
   if ( changeCase("AbE") == "abe") {
  cout << "ok";
} else {
  cout << "false";
}

if ( changeCase("AbEEI") == "abeei") {
  cout << "ok";
} else {
  cout << "false";
}

return 0;
}
