// Sort 0's, 1's and 2's in array
// arr=> 0,1,2,0,1,2,1,2,0,0,0,1
// ans=> 0 0 0 0 0 1 1 1 1 2 2 2

// Brute Force
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+n);  

for(int e : arr)
{
cout << e << " ";
}
return 0;
}
// T.C => O(nlogn)
// S.C => O(1)


// optimal solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
int n = sizeof(arr)/sizeof(arr[0]);

int cnt_zero = 0;
int cnt_one = 0;
int cnt_two = 0;

for(int i = 0; i < n; ++i)  // O(n)
{
if(arr[i] == 0)
{
cnt_zero++;
}else if(arr[i] == 1)
{
cnt_one++;
}else if(arr[i] == 2)
{
cnt_two++;
}
}

for(int i = 0;i < cnt_zero; ++i)  // O(1/3)
{
arr[i] = 0;
}

for(int i = cnt_zero; i < cnt_zero + cnt_one; ++i) // O(2/3)
{
arr[i] = 1;
}

for(int i = cnt_zero + cnt_one; i < n; ++i) // O(3/3)
{
arr[i] = 2;
}

for(int e : arr)
{
cout << e << " ";
}
return 0;
}

// T.C => O(n + n) => O(2n) => O(n)
// S.C => O(1)


// Dutch national flag algorithm (DNF)

// 3 pointers
// low,mid,high
// if(arr[mid] == 0)
// swap(arr[low],arr[mid]),low++,mid++
// if(arr[mid] == 1)
// mid++;
// if(arr[mid] == 2)
// swap(arr[mid],arr[high]),high--

#include<bits/stdc++.h>
using namespace std;
int main()
{                                    
int arr[] = {0,1,0,2,1,1,2,1,0,2,1,2,0,2};
int n = sizeof(arr)/sizeof(arr[0]);

int low = 0;
int mid = 0;
int high = n - 1;

for(int i = 0; i < n; ++i)  
{
if(arr[mid] == 0){
swap(arr[low],arr[mid]);
low++;
mid++;
}else if(arr[mid] == 1)
{
mid++;
}else if(arr[mid] == 2)
{
swap(arr[mid],arr[high]);
high--;
}
}
for(int e : arr)
{
cout << e << " ";
}
return 0;
}

// T.C => O(n)
// S.C=> O(1)
