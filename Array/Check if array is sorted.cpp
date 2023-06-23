// check if the array is sorted or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {1,2,3,4,5,8,6};
int n=sizeof(arr)/sizeof(arr[0]);
int c = 0;
for(int i = 1; i < n; ++i)
{
if(arr[i] >= arr[i-1])
{
continue;
} else
   c++;
   break;
}
if(c == 0)
{
cout << "Array is sorted" << endl;
} else {
cout << "Array is not sorted" << endl;
}
return 0;
}

// Time Complexity -> O(n)
