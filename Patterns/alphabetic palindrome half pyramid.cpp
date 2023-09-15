// alphabetic palindrome half pyramid

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        char ch;
        for(int col=0;col<row+1;col++)
        {
             ch=col+1+'A'-1;  //important line
            cout<<ch<<" ";
        }
        for(char alpha=ch;alpha>'A';)
        {
            alpha=alpha-1;     //important line
            cout<<alpha<<" ";
        }
        cout<<endl;
    }
    return 0;
}
