// Hashing is the precomputation technique

// Given t test cases and each test case contains number
// n, print the factorial of n for each test case % M

// M = 10^9 + 7
// N = 10^5 + 10

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
int main()
{
// precompute
long long fact[N]; 
fact[0] = fact[1] = 1;
for(int i = 2; i <= N; ++i)
{
fact[i] = (fact[i-1] * i) % M; 
}

int t;
cin >> t;
while(t--)
{
int n;
cin >> n;
cout << fact[n] << " "; 
}
return 0;
}

// Time Complexity -> O(N)
// Space Complexity -> O(N)
