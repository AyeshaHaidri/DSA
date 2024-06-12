#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if( ((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') || (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')) && ( (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') ||  (s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') || (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')))
            {
                i++;
            }
            else if(!((s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') || (s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')))
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
   string s="leetcode";
   string ans=reverseVowels(s);
   cout<<ans<<endl;
}

// TC -> O(n)
// SC -> O(1)
