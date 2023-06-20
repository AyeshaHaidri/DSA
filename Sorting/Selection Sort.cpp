//Selection sort

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9,12,3,1,987,0,777,43};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; ++i)
  {
    int max = n - i - 1;
    for (int j = 0; j <= n - i - 1; ++j)
      {
	if (arr[j] > arr[max])
	  {
	    max = j;
	  }
      }
    swap (arr[max], arr[n - i - 1]);
  }
    for(int k : arr)
    {
        cout<< k << " ";
    }
    return 0;
}

// Time Complexity -> O(n^2)
// Space Complexity -> O(1)
