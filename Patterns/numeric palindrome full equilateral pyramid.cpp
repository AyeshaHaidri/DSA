//numeric palindrome full equilateral pyramid

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        //for spaces
        for(int col=0;col<n-row;col++)
        {
            cout<<" "<<" ";
        }
        //for numeric half pyramid
        int m;
        for(int col=0;col<row+1;col++)
        {
            m=col+1;
            cout<<m<<" ";
        }
        //for next numeric half pyramid
        for(int col=m;col>1;)
        {
            col--;
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}






