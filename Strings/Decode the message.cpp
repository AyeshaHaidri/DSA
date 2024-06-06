#include<bits/stdc++.h>
using namespace std;

    string decodeMessage(string key, string message) {

        char mapp[280]={0};  // why we cannot take vector because it has dynamic memory allocation and mapping uses the ascii value of characters to store and access the values 
        char start='a';
        string ans="";
         
        for(auto ch : key)
        {
            if(ch !=' ' && mapp[ch] == 0)
            {
                mapp[ch]=start;
                start++;
            }
           
        }
        
        for(auto var : message)
        {
            if(var==' ')
            {
                ans.push_back(' ');
            }
            else{
                 ans.push_back(mapp[var]);
            }
        }
        
        return ans;
    }
    
int main()
{
   string message="vkbs bs t suepuv";
   string key="the quick brown fox jumps over the lazy dog";
   string ans=decodeMessage(key,message);
   cout<<ans;
}

// TC -> O(n)
// SC -> O(n)
