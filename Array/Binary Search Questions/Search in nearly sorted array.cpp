// Search in a nearly sorted array using binary search
// nearly sorted -> mid of a sorted array can be found at either mid-1, mid or mid+1 in a nearly sorted array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,1,3,5,4,7,6};
    int n=v.size();
    int s=0; int e=n-1; int ans=-1; int target=6;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(v[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(v[mid-1]==target)
        {
            ans=mid-1;
            break;
        }
        else if(v[mid+1]==target)
        {
            ans=mid+1;
            break;
        }
        else if(v[mid]>target)
        {
            e=mid-2;
        }
        else{
            s=mid+2;
        }
}
if(ans>=0)
{
    cout<<"Found at: "<<ans;
}
else{
    cout<<"Not found";
}
}
