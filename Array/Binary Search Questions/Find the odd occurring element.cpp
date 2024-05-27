// All elements occur even number of times except one number we have to find that one number 
// All elements are present only in pairs and similar pairs are not present


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,1,2,2,3,3,7,7,5,5,4,4,6,6,9};
    int n=v.size();
        int l=0;
        int h=n-1;
        int mid=l+(h-l)/2;
        int ans=0;
        while(l<=h)
        {
            if(l==h){
                ans=v[l];
                break;
            }
            if(mid % 2 == 0) // even
            {
                if(v[mid] == v[mid+1] && mid+1<n)
                {
                    l=mid+2;
                }
                else if(v[mid]==v[mid-1] && mid-1>=0){
                    h=mid-2;
                }
                else
                {
                    ans=v[mid];
                    break;
                }
            }
            else{ //odd
                if(v[mid]==v[mid+1] && mid+1<n)
                {
                    h=mid-1;
                }
                else if(v[mid]==v[mid-1] && mid-1>=0)
                {
                    l=mid+1;
                }
            }
            
            mid=l+(h-l)/2;
        }
        cout<<ans;
    }
}
