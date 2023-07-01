// Reverse of Array using Recursion

#include<bits/stdc++.h>
using namespace std;
void reverseArr(int* arr,int n,int start,int end){

if(start > end)
{
return;
}

swap(arr[start],arr[end]);

reverseArr(arr,n,++start,--end);
}
int main()
{
int arr[] = {5,6,7,1,2,3,8,9};
int n = sizeof(arr)/sizeof(arr[0]);
int start = 0;
int end = n - 1;

reverseArr(arr,n,start,end);

for(int ele : arr)
{
cout << ele << " ";
}
return 0;
}
