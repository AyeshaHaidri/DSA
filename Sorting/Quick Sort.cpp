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


// another approach to quick sort

void quickSort(int *arr,int low,int high)
{
    if(low>=high) return;
    int i=low-1;
    int j=low;
    int pivot=high;
    
    while(j<pivot)
    {
        if(arr[j]<arr[pivot])
        {
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    
    quickSort(arr,low,i-1);
    quickSort(arr,low+1,high);
}

int main()
{
    int arr[]={-1,-2,-2,23,1,2,3,4,5,9,8,7,6,5,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    quickSort(arr,low,high);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// T.C => N(log2n), worst case => O(n^2)
// S.C => O(1)
