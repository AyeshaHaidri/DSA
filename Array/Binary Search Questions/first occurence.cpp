// find first occurence of a number in a sorted array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,20,20,30,30,30,30,40,50};
    int target=30;
    int n=v.size();
    int h=n-1;
    int l=0;
    int mid=(l+h)/2;
    int ans=-1;
    while(l<=h)
    {
        if(v[mid]==target){
            ans=mid;
            h=mid-1;
        }
        else if(v[mid]>target)
        {
            h=mid-1;
        }
        else if(v[mid]<target)
        {
            l=mid+1;
        }
         mid=(l+h)/2;
    }
    cout<<ans;
    
}
