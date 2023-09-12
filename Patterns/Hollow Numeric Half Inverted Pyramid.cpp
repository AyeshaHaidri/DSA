//hollow numeric half inverted pyramid

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
            if(row==0)
            {
                cout<<col+1<<" ";
            }
            else if(col==0)      //important line
            {
                cout<<row+1<< " ";
            }
            else{
                if(row==n-col-1)
                {
                    cout<<n<<" ";
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
