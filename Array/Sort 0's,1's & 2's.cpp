// Sort 0's, 1's and 2's in array
// arr=> 0,1,2,0,1,2,1,2,0,0,0,1
// ans=> 0 0 0 0 0 1 1 1 1 2 2 2

// Brute Force
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+n);  

for(int e : arr)
{
cout << e << " ";
}
return 0;
}
// T.C => O(nlogn)
// S.C => O(1)
