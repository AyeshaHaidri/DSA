// fibonacci series from 1 to n using recursion

#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
if(n == 0)
{
return 0;
}

if(n == 1)
{
return 1;
}
return fibo(n-1) + fibo(n-2);
}
int main()
{
    int a;
    cin>>a;
    cout << fibo(a);
}
