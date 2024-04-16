// rearrange array elements by sign (leetcode question)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={3,1,-2,-5,2,-4};
    int n=v.size();
    vector<int> ans(n);
    int e=0; int o=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=0)
        {
            ans[e]=v[i];
            e+=2;
        }
        else{
            ans[o]=v[i];
            o+=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}

TC-> O(n)
SC-> O(n)
