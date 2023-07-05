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


// Optimal Approach

// 2 Pointers Approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1,0,1,2,-1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);

    vector<int> temp;
    vector<vector<int>> ans;

    for(int i = 0; i < n; ++i)  // O(n)
    {
        if(i > 0 && arr[i] == arr[i-1]){
            continue;
        }
        int j = i + 1;
        int k = n - 1;
        while(j < k)  // O(n)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < 0){
                j++;
            }else if(sum > 0)
            {
                k--;
            }else{
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                ans.push_back(temp);
                temp.clear();
                j++;
                k--;
                while(j < k && arr[j] == arr[j-1]){
                    j++;
                }

                while(j < k && arr[k] == arr[k+1]){
                    k--;
                }
            }

        }
    }

    for(auto triplet : ans)
    {
        for(auto k : triplet){
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}

    // T.C => O(n^2) + nlogn
    // S.C => (one triplet)


