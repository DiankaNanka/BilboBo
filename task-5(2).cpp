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
    return result;}

int main() {  
    if (changeCase("AbE") == "abe") {
        cout << "ok" << endl;
        } else {
        cout << "false" << endl;
        }

    if (changeCase("AbEEI") == "abeei") {
        cout << "ok" << endl;
        } else {
        cout << "false" << endl;
        }
        
    if (changeCase(" ") == " ") {
        cout << "ok" << endl;
        } else {
        cout << "false" << endl;
        }
    
	 if (changeCase("IgdsJsRY EAbnOdU") == "igdsJsRy eabnodu") {
        cout << "ok";
        } else {
        cout << "false";
        }   
        
return 0;}
