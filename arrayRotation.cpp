#include <iostream>

using namespace std;

int gcd(int a,int b)
{
 if(b==0)
  return a;
 else
  return gcd(b, a%b);
}

void ArrayRotate (int A[], int n, int k)
{
 int d=-1,i,temp,j;
 for(i=0;i<gcd(n,k);i++)
 {
  j=i;
  temp=A[i];
  while(1)
  {
   d=(j+k)%n;
   if(d==i)
    break;
   A[j]=A[d];
   j=d;
  }
  A[j]=temp;
 }
}

void displayArray(int A[],int n)
{
 int i;
 for(i=0;i<n;i++)
  cout<<A[i]<<" ";
 cout<<"\n";
}

int main()
{
  int n,i,k;
  int A[n] = {1,2,3,4,5};

  cout<<"Enter the value of k\n";
  cin>>k;
  displayArray(A,n);
  ArrayRotate(A,n,3);
  displayArray(A,n);
  return 0;
}