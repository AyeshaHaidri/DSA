// fancy pattern #2

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<2*row+1;col++)
        {
            if(col%2==0){
                cout<<row+1<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
     for(int row=1;row<n;row++)  //important line 
    {
        for(int col=0;col<2*n-2*row-1;col++)
        {
            if(col%2==0){
                cout<<n-row<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}

// T.C. -> O(n^2)
// S.C. -> O(1)
