//hollow rectangle or square

#include<bits/stdc++.h>
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
            if(row==0 || row==n-1)
            {
            cout<<"* ";
            }
            else{
                if(col==0 || col==m-1){
                    cout<<"* ";
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
