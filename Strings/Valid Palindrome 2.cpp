// check if the given string is palindrome or not by removing at most 1 element

#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str,int i,int j)
{
    while(i<=j)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;j--;
            }
            else{
                bool ans1=checkPalindrome(s,i+1,j);
                bool ans2=checkPalindrome(s,i,j-1);
                return ans1 || ans2;
        }
        }
        return true;
    
    }
int main()
{
    string s="abaacdaaba";
    bool ans=validPalindrome(s);
    cout<<ans;
}
