// find the peak element in a mountain array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,10,3,2,4,2,1};
    int n=v.size();
    int e=n-1;
    int s=0;
    int mid=(e+s)/2;
    while(e>s)   // we dont use = here because it will go into infinite loop in e=mid and it will stay on the same element
    {
        mid=(e+s)/2;
        if(v[mid]<v[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    cout<<"Peak Element is: "<< v[mid];
}


