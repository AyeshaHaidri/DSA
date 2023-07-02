//  find the majority element in an array

//  arr = [1,3,1,5,4,1,1,1]
//  majority element-> (>n/2) , ans = 1

//  Brute Force

#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int arr[] = { 2, 2, 3, 3, 1, 2, 2 };
  int n = sizeof (arr) / sizeof (arr[0]);
  int ans = 0;

  for (int i = 0; i < n; ++i)
    {
      int cnt = 0;
      for (int j = 0; j < n; ++j)
	{
	  if (arr[i] == arr[j])
	    {
	      cnt++;
	    }

	  if (cnt > n / 2)
	    {
	      ans = arr[j];
	    }
	}
    }
  cout << ans << endl;
  return 0;

}


// T.C => O(n^2)
// S.C => O(1)
