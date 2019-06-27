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
 string bsr;
 bsr="aaceeeb";
 cout<<bsr<<endl;
 cout<<countVowels(bsr);
if (string(countVowels(bsr)) == countVowels("aaceeeb")) 
{
                              
  cout << "ok"<<endl;
} else 
{
  cout << "false"<<endl;
}
 
  bsr=" ";
  cout<<bsr<<endl;  
 cout<<countVowels(bsr);
if (string(countVowels(bsr)) == countVowels(" ")) 
{
                              
  cout << "ok"<<endl;
} else 
{
  cout << "false"<<endl;
}  
 bsr="1234";
 cout<<bsr<<endl;   
 cout<<countVowels(bsr);
if (string(countVowels(bsr)) == countVowels("aaceeeb")) 
{
                              
  cout << "ok"<<endl;
} else 
{
  cout << "false"<<endl;
} 
 bsr="sayriuoosafued";
 cout<<bsr<<endl;   
 cout<<countVowels(bsr);
if (string(countVowels(bsr)) == countVowels("sayriuoosafued")) 
{
                              
  cout << "ok"<<endl;
} else 
{
  cout << "false"<<endl;
} 
 
return 0;
}
