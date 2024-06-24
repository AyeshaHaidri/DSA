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
