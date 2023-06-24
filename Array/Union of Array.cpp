// Union of two sorted arrays

//Brute force
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr1[] = {2,5,7,8,8,9};
int n1 = sizeof(arr1)/sizeof(arr1[0]);

int arr2[] = {3,4,7,8,9,10};
int n2 = sizeof(arr2)/sizeof(arr2[0]);

set<int> s;

for(int i = 0;i < n1; ++i) // n1
{
s.insert(arr1[i]); // logn  => n1logn
}

for(int i = 0; i < n2; ++i)  // n2
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


// // // T.C => n1logn + n2logn + (n1 + n2)
// // // S.C => (n1 + n2) + (n1 + n2)(returning an answer)
