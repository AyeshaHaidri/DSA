// Butterfly Pattern using *

#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int r, i, j;
  cin >> r;

  for (i = 1; i <= r; i++)
    {
      for (j = 1; j <= i; j++)
	cout << "*";
      for (j = 1; j <= 2 * (r - i); j++)
	cout << " ";
      for (j = 1; j <= i; j++)
	cout << "*";
      cout << "endl";
    }
	
  for (i = r; i >= 1; i--)
    {
      for (j = 1; j <= i; j++)
	cout << "*";
      for (j = 1; j <= 2 * (r - i); j++)
	cout << " ";
      for (j = 1; j <= i; j++)
	cout << "*";
      cout << "endl";
    }
	
  return 0;
}

// T.C.->O(n^2)
// S.C.->O(1)


