// erasing from multiset
#include <iostream>
#include <set>
#include <vector>
#include <queue>
using namespace std;
int findKthLargest(vector<int> nums, int k)
{
 priority_queue<int> pq(nums.begin(), nums.end());
 for(int i=0; i < k-1; i++)
  {
     pq.pop();
  }
   return pq.top();
 }
int main ()
{
  
  vector<int> arr = {1,4,68,23,5};
  cout << findKthLargest(arr, 3); //k ==3
  return 0;
}