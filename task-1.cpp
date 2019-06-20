#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
 int a=0,
     e=0,
     i=0,
     o=0,
     u=0,
     y=0;
 
 string bsr;
 getline(cin,bsr);
 
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
 cout<< "a = " << a << endl;
 cout<< "e = " << e << endl;
 cout<< "i = " << i << endl;
 cout<< "o = " << o << endl;
 cout<< "u = " << u << endl;
 cout<< "y = " << y << endl;

 return 0;
}
