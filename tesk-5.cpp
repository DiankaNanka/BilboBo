#include <string>
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

string countVowels(string bsr) {
  int a=0,
      e=0,
      i=0,
      o=0,
      u=0,
      y=0;

  for (int increment=0; increment<bsr.length(); increment++) {
    if (bsr[increment]=='a') {
     a++;
    }
    if(bsr[increment]=='e') {
     e++;
    }
    if(bsr[increment]=='i') {
     i++;
    }
    if (bsr[increment]=='o') {
     o++;
    }
    if (bsr[increment]=='u') {
     u++;
    }
    if (bsr[increment]=='y') {
     y++;
    }
  }

  return "a = " + to_string(a) 
    + "e =" + to_string(e) 
    + "i =" + to_string(i) 
    + "o =" + to_string(o) 
    + "u =" + to_string(u)
    + "y =" + to_string(y);
}

int main() {
if (countVowels("aeioyu") == "a = 1e =1i =1o =1u =1y =1") {
      cout << "ok" << endl;
    } else {
      cout << "false" << endl;
    }
 
    if (countVowels("abbbbb") == "a = 1e =0i =0o =0u =0y =0") {
      cout << "ok" << endl;
    } else {
      cout << "false" << endl;
    }
    
return 0;
}
