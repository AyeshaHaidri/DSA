// Cyclic Sort

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {3,8,1,2,7,5,6,4};
int n = 8;

int i = 0;
while(i < n)  // o(n)
{
int correctIndex = arr[i] - 1;
if(i != correctIndex)
{
swap(arr[i],arr[correctIndex]);
}

if(i == correctIndex)
{
i++;
}
}

for(int k : arr)
{
cout << k << " ";
}

return 0;
}
