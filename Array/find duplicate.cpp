#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={8,2,3,1,4,5,6,7,8,9};
    int i=0;
    int n=10;
    int j;
    while(i<n)
    {
        int j=abs(v[i]); // converting all negative into positive
        
         if(v[j]<0)   //checking if any element is negative i.e. already visited then return the element
        {
            cout<<j;
            break;
        }
        v[j]*=-1;    // converting the elements into negative to mark visited
        i++;
    }
    return 0;
}
