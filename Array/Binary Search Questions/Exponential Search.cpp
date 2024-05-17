// Exponential Search
// -> better than binary search when target is in starting
// -> used mostly for very large arrays or infinite arrays (unbounded arrays)
// -> array should be sorted
// -> also called galloping, strazik, doubling search 


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
    int target=999;
    int n=v.size();
    if(v[0]==target)
    {
        cout<<v[0];
    }
    int i=1;
    while(i<n && v[i]<=target)
    {
        i=i*2;
    }
    //i is index of h , i/2 is index of l
    int ans=binarySearch(v,target,i/2,i);
    cout<<ans;
}

TC -> O(log(2^(logm-1))
SC -> o(1)
