// Reverse the array

//Brute Force Approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={12,34,5,23,89};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=n-1;i>=0;--i)
    {
      cout<<arr[i]<<" ";
    }
  return 0;
}

// Time Complexity -> O(n)


//Two pointer Approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={12,34,5,23,89};
  int n=sizeof(arr)/sizeof(arr[0]);
int start = 0;
int end = n - 1;
while(start <= end)
{
swap(arr[start],arr[end]);
start++;
end--;
}
for(int k : arr)
{
cout << k << " ";
}
return 0;
}

// Time Complexity -> O(n)
