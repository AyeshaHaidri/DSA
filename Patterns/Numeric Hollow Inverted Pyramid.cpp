// Numeric hollow inverted half pyramid

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            if(row==0 || col==0)
            {
                cout<<col+1<<" ";
            }
            else{
                if(col==n-row-1)
                {
                    cout<<col+1<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

// T.C. -> O(n^2)
// S.C. -> O(1)
