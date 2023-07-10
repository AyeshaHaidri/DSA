// longest subarray length with sum k (only positives)
// subarray -> contigous part of array

// Brute Force
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,1,1,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    int length = 0;
    for(int i = 0; i < n; ++i)  // O(n)
    {
        int sum = 0;
        for(int j = i; j < n; ++j) // O(n)
        {
            if(sum > k)
            {
                break;
            }
            sum+=arr[j];
            if(sum == k)
            {
                length = max(length,j-i+1);
            }
        }
    }
    cout << length << endl;
    return 0;
}

    // T.C => O(n^2)
    // S.C => O(1)


