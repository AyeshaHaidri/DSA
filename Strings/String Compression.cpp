#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> chars={"a","a","b","b","b","b","b","b","b","b","b","b","b","b","b","b"};
    if(chars.size()==1) 
    {
        cout<<"1"; 
        return 0;
    }
        int i=0;  
        int j=1; 
        string ans="";
        while(i<chars.size())
        {
            int count=1;
            ans+=chars[i];
            while(chars[i]==chars[j])
            {
                count++;
                j++;
            }
            i=j;
            j++;
            ans+=to_string(count);
        }
        cout<<ans;
}

 int compress(vector<char>& chars) {
          if(chars.size()==1) return 1;
        int i=0;  
        int j=0; 
        string ans="";
        while(i<chars.size())
        {
            int count=0;
            ans+=chars[i];
            while(j<chars.size() && chars[i]==chars[j])
            {
                count++;
                j++;
            }
            i=j;
            
            if(count>1)
            {
                ans+=to_string(count);
            }
        }
        // emptying the chars vector
        while(chars.size()!=0)
        {
            chars.pop_back();
        }
        // copying the ans content into chars vector 
        for( int i=0;i<ans.size();i++)
        {
            chars.push_back(ans[i]);
        }
        return chars.size();
    }
