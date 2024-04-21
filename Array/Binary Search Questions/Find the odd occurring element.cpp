// All elements occur even number of times except one number we have to find that one number 
// All elements are present only in pairs and similar pairs are not present


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,1,2,2,3,3,7,7,5,5,4,4,6,6,9};
    int n=v.size();
    int s=0; int e=n-1;
    int mid=s+(e-s)/2;
    while(e>=s)
    {
        if(mid%2==0 && v[mid]==v[mid+1] || mid%2 != 0 && v[mid]==v[mid-1])
        {
            s=mid+1;
        }
        else if(mid%2==0 && v[mid]==v[mid-1] || mid%2 != 0 && v[mid]==v[mid+1])
        {
            e=mid-1;
        }
        else if(mid%2==0 && v[mid-1]!=v[mid] && v[mid+1]!=v[mid])
        {
            cout<<v[mid] << " at index "<< mid;
            break;
        }
        else if(s==e)
        {
            cout<<v[mid]<< " at index "<< mid;
            break;
        }
        mid=s+(e-s)/2;
    }
}
