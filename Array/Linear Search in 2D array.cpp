// Linear search in 2d array

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[3][3] = {
{1,2,3},
{4,5,6},
{7,8,9}
};
int target = 6;
for(int i = 0; i < 3; ++i)
{
for(int j = 0; j < 3; j++)
{
if(arr[i][j] == target)
{
cout << "Element Found at index: " << i << "," << j << endl;
}
}
}
}      

// Time Complexity -> O(n*m)
// Space Complexity -> O(1)
