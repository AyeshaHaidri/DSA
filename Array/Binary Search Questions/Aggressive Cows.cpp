// You are given an array consisting of n integers which denote the position of a stall. 
// You are also given an integer k which denotes the number of aggressive cows. 
// You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
// The first line of input contains two space-separated integers n and k.
// The second line contains n space-separated integers denoting the position of the stalls.

#include<bits/stdc++.h>
using namespace std;

bool PossibleAssignment (vector < int >&v, int n, int k, int mid)
{
  int cowsCount = 1;
  int lastcow = v[0];  // initializing first cow at 0th index
  for (int i = 1; i < n; i++)
	{
	  if (v[i] - lastcow >= mid)  // because if two cows can be assigned at 'mid' distance from each other then they can defininetly be assigned at a distance more than mid
		{
		  cowsCount++;
		  lastcow = v[i];
		  if (cowsCount == k)
			{
			  return true;
			}
		}
	}
  return false;
}

int main ()
{
  vector < int > v = { 10, 1, 2, 7, 5 };  // stall positions
  int n = v.size ();			          // number of stalls
  int k = 3;				              // aggressive cows
  sort (v.begin (), v.end ());
  int l = 0;
  int h = v[n - 1];

  int mid = l + (h - l) / 2;
  int ans = -1;
  while (l <= h)
	{
	  if (PossibleAssignment (v, n, k, mid))
		{
		  ans = mid;
		  l = mid + 1;  // because we have to find the largest distance 
		}
	  else
		{
		  h = mid - 1;
		}
	  mid = l + (h - l) / 2;
	}
  cout << ans;
}
