#include <bits/stdc++.h>
using namespace std;

static bool mycomp(string &a,string &b)
{
    string x=a+b;
    string y=b+a;
    return x>y;
}
    string largestNumber(vector<int>& nums) {
        // convert all integers into string and add to a vector 
        // sort the strings in lexicographical order and using the custom comparator
        // convert the vector of strings into a string 

        vector<string> temp;
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back(to_string(nums[i]));
        }
        sort(temp.begin(),temp.end(),mycomp);

        string ans="";
        for(int i=0;i<temp.size();i++)
        {
            ans+=temp[i];
        }
        if(ans[0]=='0') 
        {
            return "0";
        }
        return ans;
           }
int main()
{
    
   vector<int> nums={3,30,34,5,9};
    string ans=largestNumber(nums);
    cout<<ans;
}
