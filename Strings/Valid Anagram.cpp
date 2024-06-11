#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
      if(s.length()!=t.length())
        {
            return false;
        }

        int mapping[1000]={0};
        
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            mapping[ch]=mapping[ch]+1;
        }
        for(int i=0;i<t.length();i++)
        {
            char ch=t[i];
            if(mapping[ch]==0)
            {
                return false;
            }
            else{
                mapping[ch]--;
            }
        }
        return true;
}

int main()
{
   string s = "anagram";
   string t = "nagaram";
   bool ans=isAnagram(s,t);
   cout<<ans<<endl;
}

// TC -> O(n)
// SC -> O(n)
