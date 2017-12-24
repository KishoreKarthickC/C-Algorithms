#include <iostream>
#include <string>
#include <unordered_map>
#include <array>
using namespace std;

char secondMax(string str)
{
   unordered_map<char, int> map;
   for(int i=0; i < str.size(); i++)
   {
       map[str.at(i)]++;
   }
   
   int max =0, secMax = 0;
   char ch;
   int curr = 0;
   
   for(auto x : map)
   {
       curr = x.second;
       if(curr > max)
       {
           secMax = max;
           max = curr;
       }
       else
       {
           if(curr >= secMax)
           {
              secMax =  curr;
              ch = x.first;
           }
       }
   }
   return ch;
    
}

int main ()
{
    
     string str = "geekkk";
     char c = secondMax(str);
     cout << " " << c << endl;
   

  return 0;
}