#include <bits/stdc++.h>
using namespace std;


void createMapping(string&str)
{
    char start='a';
    char mapping[300]={0};

    for(auto ch:str)
    {
        if(mapping[ch]==0)
        {
            mapping[ch]=start;
            start++;
        }
    }

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        str[i]=mapping[ch];  // yahan pe for each loop isiliye nhi lagae kyunki for each loop se str[i] access nhi
        // ho pata and we have to change every character and bring them together
    }
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;

        createMapping(pattern);

        for(auto st : words)
        {
            string temp=st;  // temp mein store isiliye karae kyunki agar st bhejenge map hone ke liye to vo change 
            // ho jaega aur ans mein hmko push back karna h words[i] ko naaki map hue ve string ko 
            createMapping(temp);

            if(temp==pattern)
            {
                ans.push_back(st);
            }

        }
        return ans;
    }

int main()
{
    vector<string> words={"aab","fdg","ppo","lll","jku","ooi"};
    string pattern="wwe";
    vector<string> ans=findAndReplacePattern(words,pattern);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
