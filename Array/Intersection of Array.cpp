// Brute Force
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr1[] = {1,2,2,3,3,4,4,5,5,6,7};
int n1 = sizeof(arr1)/sizeof(arr1[0]);

int arr2[] = {2,3,3,5,6,6,7,8};
int n2 = sizeof(arr2)/sizeof(arr2[0]);

int ay[n2];
vector<int> ans;
for(int i = 0; i < n1; ++i)
{
for(int j = 0; j < n2; ++j)
{
if(arr1[i] == arr2[j] &&ay[j] == 0)
{
ans.push_back(arr1[i]);
ay[j] = 1;
break;
}
if(arr2[j] > arr1[i])
{
break;
}
}
}
for(int ele : ans)
{
cout << ele << " ";
}
return 0;
}

// T.C  => O(n1 * n2)
// S.C => O(n2)
