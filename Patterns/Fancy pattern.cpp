#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
if(n == 1)
{
cout << "1" << endl;
return;
}
for(int i = 1; i <= n; ++i)
{
cout << i << " ";
}
cout << endl;
pattern(n-1);
for(int i = 1; i <=n; ++i)
{
cout << i << " ";
}
cout << endl;
}
int main()
{
    int a;
    cin>>a;
    pattern(a);
    return 0;
}
