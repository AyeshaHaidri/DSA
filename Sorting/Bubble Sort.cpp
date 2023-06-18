// bubble sort -> comparing adjacent elements and swapping if in wrong order 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)  
    {
        cin>>arr[i];
    }
    for(int a=0;a<n;++a)
    {
        for(int b=a+1;b<n;++b)
        {
            if(arr[a]>arr[b])
            {
                swap(arr[a],arr[b]);
            }
        }
    }
    for(int k :arr)  
    {
        cout<<k<<" ";
    }
    return 0;
}

//Time Complexity -> O(n^2)
//Space Complexity -> O(1)
