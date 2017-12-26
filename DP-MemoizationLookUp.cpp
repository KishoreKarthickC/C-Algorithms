/* C++ program for Memoized version for nth Fibonacci number */
#include<iostream>
#define NIL -1
#define MAX 10

int lookup[MAX];

void _initialize()
{
    for(int i=0; i < MAX; i++)
    {
        lookup[i] = NIL;
    }
}

int fib(int n)
{
    if(n <= 1)
    {
        lookup[n] = n;
    }
    else
    {
        lookup[n] = fib(n-1) + fib(n-2);
    }
    return lookup[n];
}
int main ()
{
int n = 5;
_initialize();
printf("Fibonacci number is %d ", fib(n));
return 0;
}
