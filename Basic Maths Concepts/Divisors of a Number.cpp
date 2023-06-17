// Divisors of a number

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
vector<int> v;
for(int i = 1; i <= n; ++i)   //O(n)
{
if(n % i == 0)
{
v.push_back(i);
}
}
for(auto k : v)
{
cout << k << " ";
}
}
