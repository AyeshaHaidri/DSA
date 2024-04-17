// Search in rotated and sorted array

#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v,int s,int e,int target)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
    if(v[mid]==target)
    {
        return mid;
        break;
    }
    else if(v[mid]>target)
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return -1;
}
int pivotElement(vector<int> &v,int s,int e, int n)
{
    int mid=s+(e-s)/2;
    while(e>=s)
    {
        if(s==e)
        {
            return s;
            break;
        }
         if( mid+1 < n && v[mid]>v[mid+1])
        {
            return mid;
            break;
        }
        else if( mid-1 < n && v[mid]<v[mid-1])
        {
            return mid-1;
            break;
        }
       
        else if(v[s]>v[mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main() 
{
    vector<int> v={7,8,9,1,2,3,4}; int target=3;
    int n=v.size();
    int s=0; int e=n-1; int ans=-1;
    int pivot=pivotElement(v,s,e,n);
    if(v[s]<= target && target<=v[pivot] )
    {
         ans=binarySearch(v,s,pivot,target);
    }
    else{
         ans=binarySearch(v,pivot+1,e,target);
    }
    if(ans!=-1){
    cout<<"Target Element found at index : " << ans;
    }
    else{
        cout<<"Target Element not found.";
    }
}

TC -> O(logn)
SC ->O(1)
