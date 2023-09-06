// diamond pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int n=num/2;
    
    //for full pyramid
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
            cout<<"* ";
        }
        cout<<endl;
    }
    //for inverted pyramid
    for(int row=0;row<n;row++)
    {
         //for spaces
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
        //for stars
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

// T.C. -> O(n^2)
// S.C. -> O(1)
