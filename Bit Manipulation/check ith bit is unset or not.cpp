
// check if ith bit is unset or not 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; //number 
    int i;
    cin>>i; //ith bit
    if(n | (1<<i))
    {
        cout<<"unset"<<endl;
    }
    else{
        cout<<"set"<<endl;
    }
    return 0;
}
