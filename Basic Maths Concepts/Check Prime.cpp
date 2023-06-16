// Check if number is prime or not

#include<bits/stdc++.h>
  using namespace std;
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 2; i < n; ++i)
    {
      if (n % i == 0)
	{
	  cnt++;
	  break;
	}
    }
  if (cnt == 0)
    {
      cout << "Prime Number" << endl;
    }
  else
    {
      cout << "Not Prime" << endl;
    }
  return 0;
}
