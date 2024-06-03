// check if given string is palindrome or not by ignoring the special characters and space

#include<bits/stdc++.h>
using namespace std;

 bool validPalindrome(string s) {
        int i=0;int j=s.length()-1;
        while(i<=j)
        {
            if(tolower(s[i])==tolower(s[j]))
            {
                i++;j--;
            }
            else if(!isalnum(s[i]))
            {
                i++;
                continue;
            }
            else if(!isalnum(s[j]))
            {
                j--;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }

int main()
{
    string s="roo@#oao: oo>r $ #!a<f,if'a racecar af}ifa roo^&oaoo-or";
    bool ans=validPalindrome(s);
    cout<<ans;
}

TC -> O(n)
SC -> O(1)
