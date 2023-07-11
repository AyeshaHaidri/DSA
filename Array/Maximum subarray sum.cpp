// Maximum Subarray sum

// Brute Force
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxi = INT_MIN;

    for(int i = 0; i < n; ++i)  // O(n)
    {
        int sum = 0;
        for(int j = i; j < n; ++j) // O(n)
        {
            sum+=arr[j];
            maxi = max(maxi,sum);
        }
    }

    // T.C => O(n^2)
    // S.C => O(1)

    cout << maxi << endl;
    return 0;
}
