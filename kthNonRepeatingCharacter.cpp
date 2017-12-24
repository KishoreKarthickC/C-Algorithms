#include <iostream>
#include <string>
#include <map>
#include <array>
#include <vector>
using namespace std;

char kthNonRepeatingCharacter(string str, int n)
{
  map<char, int> map;
  for(int i=0; i < str.length(); i++)
  {
      map[str.at(i)]++;
  }
  
  int count = 0;
  char ch;
  for(auto x : map)
  {
      if(x.second == 1)
      {
          count++;
          if(count == n)
          {
               ch = x.first;
          }
      }
  }
  return ch;
          
    
    
}

int main ()
{
    
     string str = "geekkkst";
     char ch = kthNonRepeatingCharacter(str, 3);
     cout << ch << endl; 
     return 0;
}