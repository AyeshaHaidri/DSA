// Find the square root of a number using binary search and round off to lower integer

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num=8; int ans=-1;
    int e=8; int s=0;
    int mid=(s+e)/2;
    while(e>=s)
    {
        if(mid*mid > num)
        {
            ans=mid-1;
            e=mid-1;
        }
        else if(mid*mid < num){
            ans=mid;
            s=mid+1;
        }
        else{
            ans=mid;
            break;
        }
        mid=(s+e)/2;
    }
    cout<<ans;
}
TC -> O(logn)
SC -> O(1)
