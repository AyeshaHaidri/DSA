// Sieve of Eratosthenes algorithm
// to find all prime numbers less than given input

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;  // precompute

int main ()
{
  vector <bool> isPrime (N, 1);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i < N; ++i)
    {
      if (isPrime[i] == true)
	{
	  for (int j = 2 * i; j < N; j += i)
	    {
	      isPrime[j] = false;
	    }
	}
    }
  int n;
  cin >> n;
  for (int p = 2; p <= n; p++)
    {
      if (isPrime[p])
	{
	  cout << p << " ";
	}
    }
    return 0;
}

// Time complexity -> O(n*log(log(n)))
// Space complexity ->O(n)
