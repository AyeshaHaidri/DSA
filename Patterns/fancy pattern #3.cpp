 // fancy pattern #3

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        int col;
        cout<<"* ";
        for(col=1;col<row;col++)
        {
             cout<<col<<" ";
        }
        for(int col1=col-1;col1>1;)
        {
            col1--;
            cout<<col1<<" ";
        }
            cout<<"* ";
        cout<<endl;
    }
     return 0;
}
    
