// more pointers
#include <iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class Stack
{
    int size;
    queue<int> q1, q2;
    public:
    Stack()
    {
      size = 0;   
    }
    
    void push(int x)
    {
        
        size++;
        q2.push(x);
        
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        swap(q1,q2);
    }
    
    void pop()
    {
        if(q1.empty())
        {
            return;
        }
        
        q1.pop();
        size--;
    }
    
    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        else
        {
            return q1.front();
        }
    }
};
        
    
int main()
{
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.pop();
  cout << "Top element is  " << s.top(); 
}