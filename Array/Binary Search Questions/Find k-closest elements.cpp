// Leetcode question
// Find the k closest element to x 

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,3,4,5,12,13,15,45};
    int x=5; int k=4;
    int n=v.size();
    int l=0;
    int h=n-1;
    int mid=(l+h)/2;
    while((h-l) >=k)
    {
        if(abs(v[l]-x) > abs(v[h]-x))
        {
            l++;
        }
        else{
            h--;
        }
        mid=(l+h)/2;
    }
    for(int i=l;i<=h;i++)
    {
        cout<<v[i]<<" ";
    }
}

// TC -> O(n-k)
// SC -> O(1)
