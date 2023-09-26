// unset the ith bit
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    int ans = (n & ~(1<<i));
    cout<<ans<<endl;
    return 0;
}
