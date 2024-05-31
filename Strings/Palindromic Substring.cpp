#include<bits/stdc++.h>
using namespace std;

int expand(string &s,int i,int j)
{
    int count=0;
    while( i>=0 && j<s.length() && s[i]==s[j] )
    {
        count++;
        i--;
        j++;
    }
    return count;
}
    int countSubstrings(string s) {
        int totalCount=0;
        for(int center=0;center<s.length();center++)
        {
            int evenSubs=expand(s,center,center);
            int oddSubs=expand(s,center,center+1);
            totalCount=totalCount+evenSubs+oddSubs;
        }
        return totalCount;
    }
int main()
{
    string s="abaac";
    int ans=countSubstrings(s);
    cout<<ans;
}
