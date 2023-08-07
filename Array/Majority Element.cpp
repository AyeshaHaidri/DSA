//  find the majority element in an array
//  arr = [1,3,1,5,4,1,1,1]
//  majority element -> (>n/2) , ans = 1

//  Brute Force

#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int arr[] = { 2, 2, 3, 3, 1, 2, 2 };
  int n = sizeof (arr) / sizeof (arr[0]);
  int ans = 0;

  for (int i = 0; i < n; ++i)
    {
      int cnt = 0;
      for (int j = 0; j < n; ++j)
	{
	  if (arr[i] == arr[j])
	    {
	      cnt++;
	    }

	  if (cnt > n / 2)
	    {
	      ans = arr[j];
	    }
	}
    }
  cout << ans << endl;
  return 0;
}

// T.C => O(n^2)
// S.C => O(1)


// Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2,2,3,3,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxi = 0;
    for(int i = 0; i < n; ++i) 
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    int hsh[maxi + 1];

    for(int i = 0; i < n; ++i) 
    {
        hsh[arr[i]]++;
    }

    int k = sizeof(hsh)/sizeof(hsh[0]);

    for(int i = 1; i <= k; ++i) 
    {
        if(hsh[i] > n/2)
        {
            cout << i << endl;
            break;
        }
    }

    // T.C => O(3N)
    // S.C => O(maxi)
}


// Moore's voting algorithm
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = v.size();
    int cnt = 0;
    int ele;

    for(int i = 0; i < n; ++i)  
    {
        if(cnt == 0)
        {
            ele = v[i];
            cnt++;
        } else if(v[i] == ele)
        {
            cnt++;
        }else{
            cnt--;
        }
    }

    int new_cnt = 0;

    for(int i = 0; i < n; ++i)  
    {
        if(v[i] == ele)
        {
            new_cnt++;
        }

        if(new_cnt > n/2)
        {
            cout << ele << endl;
        }
    }

    // T.C => O(2N)
    // S.C => O(1)
    return 0;
}

