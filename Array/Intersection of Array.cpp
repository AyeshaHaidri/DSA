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



//Optimized approach
//first sorting the vectors then finding the common elements then removing the duplicates 
// by moving the unique elements at starting and then popping the duplicate elements 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a={4,9,5,10,3,3,3,3,5,5,5};
    vector<int> b={9,4,9,8,4,1,2,5,3,4};
    int n=a.size();
    int m=b.size();
    vector<int> c;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0; int j=0;
    
    //finding common elements from two vectors
    while(i<n && j<m)
    {
        if(a[i]>b[j])
        {
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else{
            c.push_back(a[i]);
            i++;j++;
        }
    }
    
    //placing all the uniuqe elements in the starting
     int s=c.size();
    int x=1; int y=0;
    while(x<s)
    {
        if(c[x]==c[y])
        {
            x++;
        }
        else{
            c[y+1]=c[x];
            y++;x++;
        }
    }
    
   
    //removing the duplicates
    for(int q=s;q>y+1;q--)
    {
        c.pop_back();
    }
  
   int f=c.size();   //very important because after poppiing elements the size changes 
   
  //printing the vector
      for(int z=0;z<f;z++)
    {
        cout<<c[z]<<" ";
    }
    
}

// TC-> O(nlogn)
// SC-> O(n)


