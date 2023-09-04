// half pyramid numeric
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    // 1 2 3 4 5 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// T.C -> O(n^2)
// S.C -> O(1)
