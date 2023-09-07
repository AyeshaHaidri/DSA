 // hollow pyramid of *

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    { 
        //for spaces
        for(int col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        //for stars
        for(int col=0;col<row+1;col++)
        {
            if(col==0 || col==row)
            {
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}

// T.C. -> O(n^2)
// S.C. -> O(1)
