#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,8};
    int n=v.size();
    int l=0;
    int h=n-1; 
    int ans=-1;
    int mid=l+(h-l)/2;
    while(l<=h)
    {
           if(v[mid]-mid==1)
           {
               l=mid+1;
           }
           else{
                  ans=v[mid]-1;
                  h=mid-1;
              }
              mid=l+(h-l)/2;
        }
        if(ans<0)  // for handling the nth case if all the elements from 1 to n-1 is present and the nth element is absent 
        {
            cout<<v[n-1]+1;
        }
        else{
            cout<<ans;
        }
}
