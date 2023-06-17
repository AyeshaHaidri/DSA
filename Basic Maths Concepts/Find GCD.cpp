// Gcd of two numbers using Euclidean Algorithm

#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a;
  int b;
  cin >> a >> b;
  while (a > 0 && b > 0)
    {
      if (a > b)
	{
	  a = a % b;
	}
      else
	{
	  b = b % a;
	}
    }
  if (a == 0)
    {
      cout << b << endl;
    }
  else
    {
      cout << a << endl;
    }
  return 0;
}

// Time complexity -> O(log(min(a,b)))
