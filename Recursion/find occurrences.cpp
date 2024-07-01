#include <bits/stdc++.h>
using namespace std;

void findIndex(int arr[],int n,int i,int target)
{
    if(i==n)
    {
        return;
    }
    if(arr[i]==target)
    {
        cout<<i<<" ";
    }
    findIndex(arr,n,i+1,target);
}

int main()
{
    int arr[]={1,2,3,3,3,3,3,3,4,3,2,1,3,3,4,4,2};
    int n=sizeof(arr);
    int i=0;
    int target=3;
    cout<<"The indices on which target is present are :"<<"  ";
    findIndex(arr,n,i,target);
}

// TC -> O(n)
// SC -> O(n)
