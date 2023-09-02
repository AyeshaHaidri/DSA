// for printing a solid * rectangle 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
