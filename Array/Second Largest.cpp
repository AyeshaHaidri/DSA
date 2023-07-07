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

// optimized approach
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int arr[] = { 9, 2, 4, 7, 7, 5 };
  int n = 6;
  int largest = arr[0];
  int sl = -1;

  for (int i = 1; i < n; ++i)
    {
      if (arr[i] > largest)
	{
	  sl = largest;
	  largest = arr[i];
	}
      else if (arr[i] < largest && arr[i] > sl)
	{
	  sl = arr[i];
	}
    }
  cout << sl << endl;
  return 0;
}

// T.C => o(n)
