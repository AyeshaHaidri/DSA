#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) 
    {
        // ignore all the white spaces
        // check for the sign 
        // jb tk digits h tb tak ++
        // agar char milta h phele to return 0
        int num=0;
        int sign=1;
        int i=0;
        while(s[i]==' ' && i<s.length())
        {
            i++;
        }
        if(i<s.length() && (s[i]=='-' || s[i]=='+'))
        {
            sign=s[i]=='-'? -1 : 1;
            i++;
        }
        while(i<s.length() && isdigit(s[i]) )
        {
            if(num>INT_MAX/10 || num<INT_MIN/10 || (num==INT_MAX/10 && (s[i] > '7')) || (num==INT_MIN/10 && (s[i] > '7')))
            {
                return sign==-1? INT_MIN : INT_MAX;
            }
            num=num*10+(s[i]-'0');
            i++;
        }
        return num*sign;
    }
int main()
{
    
    string strs ="   -00456";
    int ans=myAtoi(strs);
    cout<<ans;
}
