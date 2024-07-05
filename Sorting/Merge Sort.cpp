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

// Optimised approach 

#include<bits/stdc++.h>
using namespace std;
void merge(int* arr,int n,int start,int mid,int end)
{
     int start2 = mid + 1;
    if (arr[mid] <= arr[start2]) {
        return;
    }
    while (start <= mid && start2 <= end) {
        if (arr[start] <= arr[start2]) {
            start++;
        }
        else {
            int value = arr[start2];
            int index = start2;
            while (index != start) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[start] = value;
            start++;
            mid++;
            start2++;
            
        }
        
    }

}
void divide(int* arr,int n,int low,int high)
{
if(low >= high)  
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
int arr[] = {7,9,1,2,8,6,5,0,-1,9,99};
int n = 11;
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
// Space Complexity -> O(1)
