// count the set bits

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; //number 
    int count=0;
    for(int i=4;i>=0;--i)
    {
    if((n & (1<<i)) !=0)         
    {
       count++; 
    }
    else{
       continue;
    }
    }
    cout << "set bits are " << count << endl;
    return 0;
}
