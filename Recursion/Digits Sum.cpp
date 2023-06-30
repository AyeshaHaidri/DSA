// Sum of digits using recursion

#include<bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
if(n == 0)
{
return 0;
}
int b = n % 10;
return digitSum(n/10) + b;
}
int main()
{
    int a;
    cin>>a;
    cout << digitSum(a);
    return 0;
}
