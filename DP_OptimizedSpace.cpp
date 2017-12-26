/* C++ program for Memoized version for nth Fibonacci number */
#include<iostream>
using namespace std;


int fib(int n)
{
   int a=0;
   int b = 1;
   int c;
   for(int i=2; i <= n; i++)
   {
   	 c = a+b;
   	 a = b;
   	 b =c;
   }

   return b;
}
int main ()
{
int n = 40;
cout << "Fibonacci number is " <<  fib(n);
return 0;
}
