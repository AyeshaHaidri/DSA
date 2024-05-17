// Unbounded Search -> Array size is not known i.e. infinite array size

#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v,int target,int l,int h)
{
    int mid=(l+h)/2;
    while(l<=h)
    {
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[mid]>target)
        {
            h=mid-1;
        }
        else {
            l=mid+1;
        }
        mid=(l+h)/2;
    }
    return -1;
}
int main()
{
    vector<int> v={12,23,45,67,78,89,99,999,99999,9999999};
    int target=45;
    int n=v.size();
    int i=0;
    int j=1;
    while(v[j]<target)
    {
        i=j;
        j=j*2;
    }
    int ans=binarySearch(v,target,i,j);
    cout<<ans;
}

TC -> O(log(2^(logm-1))
SC -> O(1)
