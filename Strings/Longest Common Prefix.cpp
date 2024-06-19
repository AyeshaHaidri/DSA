#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans="";bool flag=false;
        int min=INT_MAX;
        // min of all the strings tak hi loop chalna chaiye na to min size string nikalna padega 
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<min)
            {
                min=strs[i].size();
            }
        }
        int j;
        for(int i=0;i<min;i++)
        {
            for(j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]==strs[j+1][i])
                {
                    flag=true;
                }
                else{
                    return ans;
                }
            }
            if(flag)
            {
                 ans+=strs[j][i];
            }
        }
        return ans;
    }

int main()
{
    
    vector<string> strs = {"flower","flowe","floweght"};
    string ans=longestCommonPrefix(strs);
    cout<<ans;
         
}
