// unordered_map::operator[]
#include <iostream>
#include <string>
#include <unordered_map>
#include <array>
#include <vector>
using namespace std;

vector<string> substring(string str)
{
    int n = str.length();
    vector<string> s;
    for(int i = 0;  i < n; i++)
    {
       for(int j = 1; j <= n-i; j++)
       {
          s.push_back( str.substr(i,j));
       }
       cout << endl;
    }
    
    return s;
           
  
    
}

int main ()
{
    
     string str = "geekkk";
     vector<string> c = substring(str);
     for(vector<string>::iterator it = c.begin(); it != c.end(); ++it)
     {
         cout << " " << *it << endl;
     }
    
     
   

  return 0;
}