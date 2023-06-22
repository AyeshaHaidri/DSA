// Sort 0s and 1s

// arr = {0,1,1,1,0,0,1,0,1,1,0,1};
// ans => {0,0,0,0,0,1,1,1,1,1,1,1};

// Brute Force Approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {0,1,1,1,0,0,1,0,1,1,0,1};
int n = sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n); 
for(int ele : arr)
{
    cout << ele << " ";
}
return 0;
}

// Time Complexity -> O(nlogn)
// Space Complexity -> O(1)



// Optimized Approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {0,1,1,1,0,0,1,0,1,1,0,1};
int n = sizeof(arr)/sizeof(arr[0]);
int countZero = 0;
for(int i = 0;i < n; ++i) // o(n)
{
if(arr[i] == 0)
{
countZero++;
}
}

for(int i = 0;i < countZero; ++i) // o(x)
{
arr[i] = 0;
}

for(int i = countZero;i < n; ++i) // O(n-x)
{
arr[i] = 1;
}
for(int ele : arr)
{
    cout << ele << " ";
}
return 0;
}

// Time Complexity -> O(n) + O(x) + O(n-x) -> O(2n)
// Space Complexity -> O(1)



// More Optimized Approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {0,1,1,1,0,0,1,0,1,1,0,1};
int n = sizeof(arr)/sizeof(arr[0]);
int start = 0;
int end = n - 1;
while(start < end)
{
while(arr[start] == 0 && start < end)
{
start++;
}
while(arr[end] == 1 && start < end)
{
end--;
}
if(arr[start] == 1 && arr[end] == 0 && start < end)
{
swap(arr[start],arr[end]);
start++;
end--;
}
}
for(int ele : arr)
{
cout << ele << " ";
}
}

// Time Complexity -> O(n)
// Space Complexity -> O(1)

