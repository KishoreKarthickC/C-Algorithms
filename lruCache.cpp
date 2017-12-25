// more pointers
#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;

class LRU
{
    list<int> dq;
    unordered_map<int, list<int>::iterator> m;
    int size;
    public:
     LRU(int n)
     {
         size = n;
     }
     
     void refer(int x)
     {
         if(m.find(x) == m.end())
         {
             if(dq.size() == size)
             {
                 m.erase(dq.back());
                 dq.pop_back();
                 dq.push_front(x);
                 m[x] = dq.begin();
             }
             else
             {
                 dq.push_front(x);
                 m[x] = dq.begin();
             }
         }
         else
         {
             dq.remove(x);
             dq.push_front(x);
             m[x] = dq.begin();
         }
         
         
     }
     
     void display()
     {
         for(auto it = dq.begin(); it != dq.end(); it++)
         {
             cout << " " << *it ;
         }
     }
};

         
int main ()
{
  
  LRU lru(4);
  lru.refer(1);
  lru.refer(2);
  lru.refer(3);
  lru.refer(1);
  lru.refer(4);
 lru.refer(5);
 lru.refer(1);
 lru.refer(3);
 lru.refer(55);
  lru.display();
  return 0;
}