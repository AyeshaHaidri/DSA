// for printing a solid * square 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

// T.C.-> O(n^2)
// S.C.-> O(1)
