// sort() in STL.
// It sorts in ascending order.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
	    cin>>arr[i];
	}
	sort(arr, arr + n);    // in-built stl method for sorting
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

// Time Complexity -> O(nlogn)
// Space Complexity -> O(1)
