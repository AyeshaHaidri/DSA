#include <bits/stdc++.h>
using namespace std;
 string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(isalpha(s[i]) && isalpha(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i]))
            {
                i++;
            }
            else if(!isalpha(s[j]))
            {
                j--;
            }
            else{
                i++;j--;
            }
        }
        return s;
    }

int main()
{
   string s="l-e#et-co&de";
   string ans=reverseOnlyLetters(s);
   cout<<ans<<endl;
}

// TC -> O(n)
// SC -> O(1)
