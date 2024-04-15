// Rotate Array

// modulus method O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={1,2,3,10,3,2,4,2,1,12,3,4,5,6,66};
        int n=nums.size();
        vector<int> ans(n);
        int k=6;
        for(int i=0;i<n;i++)
        {
            int newIndex= (i+k) % n;
            ans[newIndex]=nums[i];
        }
        nums=ans;
        for(int k;k<n;k++)
        {
            cout<<nums[k]<<" ";
        }
}

// reverse method O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={1,2,3,10,3,2,4,2,1,12,3,4,5,6,66};
        int n=nums.size();
        int k=6;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        for(int k;k<n;k++)
        {
            cout<<nums[k]<<" ";
        }
        
}
