#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

 string initialStr;
 getline(cin, initialStr);
 string resultString;
 
 for (int i=0; i < initialStr.length(); i++) {
  if (initialStr[i] == 'A' 
        || initialStr[i] == 'E'
        || initialStr[i] == 'I' 
        || initialStr[i] == 'O'
        || initialStr[i] == 'U'
        || initialStr[i] == 'Y'
  ) {
    resultString += tolower(initialStr[i]);
  } else {
    resultString += initialStr[i];
  }
 }

 cout << resultString;

 return 0;
}
