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
// we can also use the formula hcf(a-b,b) if a>b and hcf(b-a,a) if b>a

// Another method for calculating gcd 

#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, b;
  cin >> a >> b;
  int gcd = __gcd (a, b);	// Stl inbuilt function for calculating gcd
  cout << "GCD is :" << " ";
  cout << gcd << endl;
  int lcm = (a * b) / gcd;	//Finding Lowest Common Divisor
  cout << "LCM is :" << " ";
  cout << lcm << endl;
  return 0;
}
