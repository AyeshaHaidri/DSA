// Maximum element in array
// Brute Force 

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {67,23,14,56,90,11};
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);
cout << "Maximum element is: "<<arr[n-1] << endl;
return 0;
}

// Time complexity -> O(nlogn)

// Optimized Approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {67,23,14,56,90,11};
int n=sizeof(arr)/sizeof(arr[0]);
int max = arr[0];
for(int i = 1; i < n; ++i)
{
if(arr[i] > max)
{
max = arr[i];
}
}
cout << "Maximum element is: "<< max << endl;
return 0;
}

// Time complexity -> O(n)
