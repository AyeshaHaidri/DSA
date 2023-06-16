// Modular Arithmetics and Precomputation 

// Addition -> (a + b) % m = ((a%m) + (b%m)) % m
// Subtraction -> (a - b) % m = ((a%m) - (b%m)) % m
// Multiplication -> (a * b) % m = ((a%m) * (b%m)) % m
// Division -> (a / b) % m = ((a % m) * (b^-1) % m) % m

// factorial by precomputation method
#include<bits/stdc++.h>
using namespace std;
// precomputation
const int M = 1e9 + 7;		// global variables
const int N = 1e5 + 10;
int main ()
{
  long long fact[N];
  fact[0] = fact[1] = 1;
  for (int i = 2; i <= N; ++i)
    {
      fact[i] = ( fact[i - 1] * i ) % M;
    }
      int t;
      cin >> t;
      while (t--)
	{
	  int n;
	  cin >> n;
	  cout << fact[n] << endl;	// O(1)
	}
      return 0;
}
