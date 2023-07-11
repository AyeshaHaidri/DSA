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
    cout << maxi << endl;
    return 0;
}
    // T.C => O(n^2)
    // S.C => O(1)


// kadane's algo
// arr[] = {-2,-3,4,-1,-2,1,5-3}

// int maxi = INT_MIN => -2 => 4 => 7
// int sum = 0 => -2 => 0 => -3 => 0 => 4 => 3 => 1 => 2 => 7 => 4

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < n; ++i) // O(n)
    {
        sum+=arr[i];

        if(sum > maxi)
        {
            maxi = sum;
        }

        if(sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}

    // T.C => O(n)
    // S.C => O(1)
