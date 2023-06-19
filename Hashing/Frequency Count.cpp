// Frequency of a number in array using hashing

// Given an array of N integers, given q queries
// and in each query,give a number x, print frequency
// of that number x in an given array

// 10^5 -> local array
// 10^7 -> global array

#include<bits/stdc++.h>
using namespace std;
// precompute
const int N = 1e6 + 10;
int
main ()
{
  int hash[N] = { 0 };

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
      hash[arr[i]]++;
    }

  int q;
  cin >> q;
  while (q--)
    {
      int x;
      cin >> x;
      cout << hash[x] << endl;
// int cnt = 0;
// for(int i = 0; i < n; ++i)
// {
// if(arr[i] == x)
// {
// cnt++;
// }
// }
// cout << cnt << endl;
    }
  return 0;
}
