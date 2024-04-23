// find the unique pairs having difference k 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={3,4,2,1,1,9,10};
    int k=2;
     sort(nums.begin(),nums.end());
        int i=0; 
        int j=1; 
        int n=nums.size(); 
        int diff;
        set<pair<int,int>> ans;
        while(j<n)
        {
            diff=nums[j]-nums[i];
            if(diff==k)
            {
                ans.insert({nums[i],nums[j]});
                i++;j++;
            }
            else if(diff>k)
            {
                i++;
            }
            else {
                j++;
            }
            if(i==j)
            {
                j++;
            }
        }
        cout<< ans.size();
}

// TC -> O(nlogn)
// SC -> O(n)
