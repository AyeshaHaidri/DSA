#include <bits/stdc++.h>
using namespace std;


bool myComp(int &a,int &b)
{
    return a%2==0 > b;
}

int main()
{
    vector<int> v={12,11,2,3,2,1,12,2,21,32,3,23,23};
    sort(v.begin(),v.end(),myComp);
    for(int val : v)
    {
        cout<<val<<" ";
    }
}

// TC -> O(nlogn)
// SC -> O(1)
