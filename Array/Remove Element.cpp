// move all the elements equal to val to right and return the length of vector without val 

#include<bits/stdc++.h>
using namespace std;

    int removeElement(vector<int>& nums, int val) {
        int i=0;int j=nums.size()-1; int count=0;
        while(i<=j)
        {
            if(nums[i]==val)
            {
                count++;
                swap(nums[i],nums[j]);
                j--;
            }
            else{
                i++;
            }
            
        }
        return nums.size()-count;
    }
int main()
{
    vector<int> nums={0,3,4,1,2,3,3,5,3,2,1,2,2};
    int val=3;
    int ans=removeElement(nums,val);
    cout<<ans<<endl;
}
