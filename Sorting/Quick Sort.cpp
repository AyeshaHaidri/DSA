// Quick Sort

#include<bits/stdc++.h>
using namespace std;
int findPartitionIndex(int* arr,int low,int high)
{
int pivot = arr[low];
int i = low;
int j = high;

while(i < j)
{
while(arr[i] <= pivot && i <= high - 1)
{
i++;
}

while(arr[j] > pivot && j >= low + 1)
{
j--;
}

if(i < j)
{
swap(arr[i],arr[j]);
}
}

swap(arr[low],arr[j]);
return j;
}
void divide(int* arr,int low,int high)
{
if(low >= high){
return;
}
int partitionIndex = findPartitionIndex(arr,low,high);
divide(arr,low,partitionIndex-1);
divide(arr,partitionIndex+1,high);

}
int main()
{
int arr[] = {4,6,2,5,7,9,1,3};
int n = sizeof(arr)/sizeof(arr[0]);

int low = 0;
int high = n - 1;

divide(arr,low,high);

for(int e : arr)
{
cout << e << " ";
}
return 0;
}

// T.C => N(log2n), worst case => O(n^2)
// S.C => O(1)
