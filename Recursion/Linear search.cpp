// Linear Search using recursion

#include<bits/stdc++.h>
using namespace std;
int search(int *arr,int n,int target,int i)
{

    if(i>=n){
        return -1;
    }
    if(arr[i]==target)
    {
        return i;
    }
    else{
        return search(arr,n,target,i+1);
    }

}
int main()
{
    int arr[]={11,6,2,53,14,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=14;
    int i=0;
    int ans=search(arr,n,target,i);
    cout<<ans;
    return 0;
}
