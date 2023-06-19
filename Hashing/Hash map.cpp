// Frequency Count using map and hashing technique

// hash map implementation
// for q test series containing x elements

#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<int,int> mp;
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; ++i)
{
cin >> arr[i];
}

    for(int i = 0; i < n; ++i)
    {
    mp[arr[i]]++;
    }

int q;
cin >> q;
while(q--)
{
int x;
cin >> x;
cout << mp[x] << endl;
}

return 0;
}
