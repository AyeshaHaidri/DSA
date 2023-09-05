//hollow half pyramid numeric 
  
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            if(row==n-1 || col==0)
            {
                cout<<col+1<<" ";
            }
            else{
                if(row==col){
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

