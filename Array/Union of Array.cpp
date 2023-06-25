// Union of two sorted arrays

// Brute force
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr1[] = {2,5,7,8,8,9};
int n1 = sizeof(arr1)/sizeof(arr1[0]);

int arr2[] = {3,4,7,8,9,10};
int n2 = sizeof(arr2)/sizeof(arr2[0]);

set<int> s;

for(int i = 0;i < n1; ++i) 
{
s.insert(arr1[i]); 

for(int i = 0; i < n2; ++i)  
{
s.insert(arr2[i]);  
}

int uni[s.size()];
int i = 0;
set<int> :: iterator it;
for(it = s.begin(); it != s.end(); it++) 
{
uni[i] = (*it);
i++;
}

for(int ele : uni)
 {
 cout << ele << " ";
}
return 0;
}


// T.C => n1logn + n2logn + (n1 + n2)
// S.C => (n1 + n2) + (n1 + n2)

// Optimized Approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr1 = {2,5,7,8,8,9};
int n1 = arr1.size();
vector<int> arr2 = {3,4,7,8,9,10,12};
int n2 = arr2.size();

int i = 0;
int j = 0;

vector<int> ans;

while(i < n1 && j < n2)
{
if(arr1[i] <= arr2[j]){
if(ans.size() == 0 || ans.back() != arr1[i])
{
ans.push_back(arr1[i]);
}
i++;
}else {
if(ans.size() == 0 ||ans.back() != arr2[j])
{
ans.push_back(arr2[j]);
}
j++;
}
}

while(j < n2)
{
if(ans.size() == 0 || ans.back() != arr2[j])
{
ans.push_back(arr2[j]);
}
j++;
}

while(i < n1)
{
if(ans.size() == 0 || ans.back() != arr1[i])
{
ans.push_back(arr1[i]);
}
i++;
}

// T.C => o(n1 + n2)
// S.C => O(n1 + n2)

for(int ele : ans)
{
cout << ele << " ";
}

return 0;
}
