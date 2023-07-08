// longest consecutive sequence

// Brute Force

#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int target) // O(n)
{
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    int arr[] = {102,4,100,1,101,3,2,103,104};
    int n = sizeof(arr)/sizeof(arr[0]);

    int longest = 1;

    for(int i = 0; i < n; ++i)  // O(n)
    {
        int x = arr[i];
        int cnt = 1;
        while(linearSearch(arr,n,x+1) == true){
            x = x+1;
            cnt++;

            longest = max(longest,cnt);
        }
    }

    cout << longest  << endl;
    return 0;
}

// T.C => O(n^2)
// S.C => O(1)


// Optimal Approach

#include <bits/stdc++.h>
using namespace std;
int main()
{
     int arr[]= {102,4,100,1,101,3,2,103,104};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);  // O(nLogN)
    int cnt_current = 0;
    int last_smallest = INT_MIN;
    int longest = 1;

    for(int i = 0; i < n; ++i) // O(N)
    {
        if(arr[i] - 1 == last_smallest)
        {
            cnt_current = cnt_current + 1;
            last_smallest = arr[i];
        }else if(arr[i] != last_smallest)
        {
            cnt_current = 1;
            last_smallest = arr[i];
        }

        longest = max(longest,cnt_current);
    }

    cout << longest << endl;
}

    // T.C => O(N) + O(nlogn)
    // S.C => O(1)
