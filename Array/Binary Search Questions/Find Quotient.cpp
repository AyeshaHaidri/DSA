// Find the quotient using binary search

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp1=-816;
    int temp2=92;
    int a=abs(temp1); 
    int b=abs(temp2);
    int s=0; int e=a;
    int mid=s+(e-s)/2; 
    int ans=-1;
    while(e>=s)
    {
        if(a == mid*b)
        {
            ans=mid;
            break;
        }
        else if(a < mid*b)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if(temp1<0 || temp2<0)
    {
        ans*=-1;
    }
    cout<<ans;
}
