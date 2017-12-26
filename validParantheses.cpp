#include <iostream>
#include <string>
#include <unordered_map>
#include <array>
using namespace std;

bool isValid(string s)
 {
     stack<char> stk;
     for(char c : s)
       {
            if(c == '{' || c == '[' || c == '(')
            {
                stk.push(c);
            }
            else
            {
              if(stk.empty())
                {
                    return false;
                }
                if(c == ')')
                {
                    if(stk.top() != '(')
                       return false;
                }
                if(c == '}')
                {
                    if(stk.top() != '{')
                       return false;
                }
                if(c == ']')
                {
                     if(stk.top() != '[')
                       return false;
                }

                stk.pop();
            }
        }

        return stk.empty();
        
        
 }
int main ()
{
    
     string str = "{{[]}}";
     cout << isValid(str) << endl; 
     return 0;
}