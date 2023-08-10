// Merge Sort

#include<bits/stdc++.h>
using namespace std;
void merge(int* arr,int n,int low,int mid,int high)
{
int left = low;
int right = mid + 1;
vector<int> temp;
while(left <= mid && right <= high){
if(arr[left] <= arr[right]){
temp.push_back(arr[left]);
left++;
}else{
temp.push_back(arr[right]);
right++;
}
}

while(right <= high)
{
temp.push_back(arr[right]);
right++;
}

while(left <= mid)
{
temp.push_back(arr[left]);
left++;
}

for(int i = low;i <= high; ++i)
{
arr[i] = temp[i-low];
}
}
void divide(int* arr,int n,int low,int high)
{
if(low >= high)  // base case
{
return;
}
int mid = (low + high)/2;
divide(arr,n,low,mid); 
divide(arr,n,mid+1,high);
merge(arr,n,low,mid,high);  
}
int main()
{
int arr[] = {3,2,4,1,3};
int n = 5;
int low = 0;
int high = n - 1;

divide(arr,n,low,high);

for(int e: arr)
{
cout << e << " ";
}
return 0;
}  


// Time complexity -> N(logn) 
// Space Complexity -> O(n)

// In this sorting technique vector is used for storing the values temporarily but we can also use an array instead of vector.
