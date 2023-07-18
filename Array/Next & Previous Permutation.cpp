// stl -> next_permutation,prev_permutation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,1,5,4,3,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    next_permutation(arr,arr+n);     //O(n)
    // prev_permutation(arr,arr+n);  // O(n)

    for(int ele : arr)
    {
        cout << ele << " ";
    }
    return 0;
}

//T.C.-> O(n)
//S.C.-> O(1)
