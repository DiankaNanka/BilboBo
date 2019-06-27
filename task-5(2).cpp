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
    string consoleInputString;
    consoleInputString = "A smOll BAg";
    cout << consoleInputString<<":"<<endl;
    cout << changeCase(consoleInputString)<<" - ";
    if (string(changeCase(consoleInputString)) == changeCase("a smoll Bag")) 
{
                              
  cout << "ok"<<endl;
} else 
{
  cout << "false"<<endl;
}
     
    consoleInputString = "I lIvE In MOscOw";
    cout << consoleInputString<<":"<<endl;
    cout << changeCase(consoleInputString)<<" - ";
    if (string(changeCase(consoleInputString)) == changeCase("i live in Moscow")) 
{
                              
  cout << "ok"<<endl;
} else 
{
  cout << "false"<<endl;
}   

return 0;
}
