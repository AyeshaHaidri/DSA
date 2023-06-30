// sum of 1 to n numbers using recursion

#include <bits/stdc++.h>
using namespace std;
int sum(int n){
if(n == 0)
{
return 0;
}
return sum(n-1) + n;
}
int main()
{
    int a;
    cin>>a;
    cout << sum(a);
    return 0;
}
