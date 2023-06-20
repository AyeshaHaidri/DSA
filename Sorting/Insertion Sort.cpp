// Insertion Sort

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9,12,3,1,987,0,777,43};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n - 1; ++i)
   {
    for (int j = i + 1; j > 0; --j)
      {
	if (arr[j] < arr[j - 1])
	  {
	    swap (arr[j], arr[j - 1]);
	  }
	else
	  {
	    break;
	  }
      }
   }
    for(int k : arr)
    {
        cout<< k << " ";
    }
    return 0;
}

// Time Complexity -> O(n^2)
// Space Complexity -> O(1)
