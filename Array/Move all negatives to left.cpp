#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,-3,-45,-9,99};
    int l=0;
    int h=5;
    while(l<h)
    {
        if(v[l]<0)
        {
            l++;
        }
        if(v[h]>=0)
        {
            h--;
        }
        else{
            swap(v[l],v[h]);
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
