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

// optimal approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1,0,1,2,-1,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> temp;
    set<vector<int>> st;

    for(int i = 0; i < n; ++i) // O(n)
    {
        set<int> s;
        for(int j = i + 1; j < n; ++j) // O(n)
        {
            int third = -(arr[i] + arr[j]);
            if(s.find(third) != s.end()){  // O(logn)
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(third);
                sort(temp.begin(),temp.end());
                st.insert(temp);
                temp.clear();
            }
            s.insert(arr[j]);  // O(j*logn)
        }
    }

    for(auto it : st)
    {
        for(auto k : it)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    // T.C => O(n^nlogn) => O(n^2)
    // S.C => O(no. of triplets) * 2 + O(j)
    return 0;
}

