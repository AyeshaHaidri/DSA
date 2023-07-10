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


// Optimal Solution
// Two Pointers Approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,1,1,1,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 6;
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int len = 0;

    while(right < n)  // O(n)
    {
        while(left <= right && sum > k) // overall O(n)
        {
            sum-=arr[left];
            left++;
        }
        if(sum == k)
        {
            len = max(len,right - left + 1);
        }
        right++;
        if(right < n)
        {
            sum+=arr[right];
        }
    }
    cout << len << endl;
    return 0;
}

 // T.C => O(2N)
 // S.C => O(1)



