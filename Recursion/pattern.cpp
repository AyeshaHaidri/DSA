// print pattern from 1 to n using recursion

// 1 2 3 4 5....n
// 1 2 3 4...n-1
// 1 2 3...n-2
// 1 2...n-3
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

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
