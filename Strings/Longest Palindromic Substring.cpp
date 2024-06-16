#include<bits/stdc++.h>
using namespace std;

string expand(string &s,int i,int j)
{
    string subs;
    while( i>=0 && j<s.length() && s[i]==s[j] )
    {
        subs=s.substr(i,j-i+1);  // important
        i--;
        j++;
    }
    return subs;
}
    string countSubstrings(string s) {
        string ans="";
        
        for(int center=0;center<s.length();center++)
        {
            string evenSubs=expand(s,center,center);
            string oddSubs=expand(s,center,center+1);
            string maxLength=evenSubs.length() > oddSubs.length() ? evenSubs : oddSubs;
            ans= maxLength.length()>ans.length() ? maxLength : ans;
        }
        return ans;
    }
int main()
{
    string s="aaaa";
    string ans=countSubstrings(s);
    cout<<ans;
}
