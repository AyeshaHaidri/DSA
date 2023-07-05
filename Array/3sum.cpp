// 3sum
// [2,5,1,9,-1,0], target == 0
// ans => {1,-1,0}

// Brute Force

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1,0,1,2,-1,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> temp;
    set<vector<int>> s;

    for(int i = 0; i < n; ++i) // O(n)
    {
        for(int j = i + 1; j < n; ++j)  // O(n)
        {
            for(int k = j + 1; k < n; ++k) // O(n)
            {
                if(arr[i] + arr[j] + arr[k] == 0)
                {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(),temp.end());
                    s.insert(temp); // O(no. of pairs)
                    temp.clear();
                }
            }
        }
    }

    for(auto it : s)
    {
        for(auto k : it)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    // T.C => O(n^3) + O(no. of pairs)
    // S.C => O(one triplet) + O(no. of triplets)
    return 0;
}
