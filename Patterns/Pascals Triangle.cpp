  // pascals triangle

#include<bits/stdc++.h>
using namespace std;
 int main()
{
     int n;
     cin>>n;
     for(int row= 1; row <=n; row++){
        for(int col = 1; col < n-row+1; col++)
            cout<<"  ";
        int val = 1;
        for(int col = 1; col<= row; col++){
            cout<<val<<"   ";
            val = val * (row- col)/col;   //important line or formula
    }
        cout<<endl;
    }
     return 0;
}

TC -> O(n^2)
SC -> O(1)
