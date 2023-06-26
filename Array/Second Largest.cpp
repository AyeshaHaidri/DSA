// Brute Force 

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {1,2,4,8,8,9,10,678};
int n = 8;

int largest = arr[0];
for(int i = 0; i < n; ++i)
{
if(arr[i] > largest)
{
largest = arr[i];
}
}
int sl = -1;
for(int i = 0; i < n; ++i)
{
if(arr[i] > sl && arr[i] != largest)
{
sl = arr[i];
}
}
cout << sl << endl;
}

// T.C => n + n => O(2n)
// S.C => O(1)
