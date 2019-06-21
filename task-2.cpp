#include <string>
#include <iostream>
#include <cstdlib>

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
return "a = " + std::to_string(a)  + "e =" 
+ std::to_string(e) + "i =" + 
std::to_string(i) + "o =" 
+ std::to_string(o) + "u =" + 
std::to_string(u) + "y =" + 
std::to_string(y);
}

int main() {
 string bsr;
 getline(cin,bsr);
 cout << countVowels(bsr);
 return 0;
}

