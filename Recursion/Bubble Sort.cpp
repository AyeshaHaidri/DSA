// bubble sort using recursion

#include<bits/stdc++.h>
using namespace std;
void sortArr(int* arr,int n)
{
if(n == 1)
{
return;
}

for(int i = 0; i < n - 1; ++i)
{
if(arr[i] > arr[i+1]){
swap(arr[i],arr[i+1]);
}
}

sortArr(arr,n-1);
}
int main()
{
int arr[] = {5,2,4,7,8};
int n = 5;

sortArr(arr,n);

for(int e : arr)
{
cout << e << " ";
}
return 0;
}

