// 4 sum

// arr[i] + arr[j] + arr[k] + arr[l] = target
// arr[1,0,-1,0,-2,2] , target = 0
// ans = {-2,-1,1,2},{-1,0,0,1},{-2,0,0,2}

// Brute Force
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,0,-1,0,-2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> temp;
    set<vector<int>> st;

    int target = 0;

    for(int i = 0; i < n; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            for(int k = j + 1; k < n; ++k)
            {
                for(int l = k + 1; l < n; ++l){
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target){
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[k]);
                        temp.push_back(arr[l]);
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                        temp.clear();
                    }
                }
            }
        }
    }

    // T.C => n^4
    // S.C=> O(no. of quadrulets) + O(one quadrulet)

    for(auto it : st)
    {
        for(auto k : it)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}


// Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,0,-1,0,-2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 0;

    vector<int> temp;
    set<vector<int>> st;

    for(int i = 0; i < n; ++i) // O(n)
    {
        for(int j = i + 1; j < n; ++j) // O(n)
        {
            set<int> s;
            for(int k = j + 1; k < n; ++k)
            {
                int fourth = target -(arr[i] + arr[j] + arr[k]);
                if(s.find(fourth) != s.end()){  
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                temp.push_back(fourth);
                sort(temp.begin(),temp.end());
                st.insert(temp);
                temp.clear();
            }
            s.insert(arr[k]);  
            }
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

    // T.C => O(n^nlogn) => O(n^3)
    // S.C => O(no. of quadruplets) * 2 + O(k)
    return 0;
}


