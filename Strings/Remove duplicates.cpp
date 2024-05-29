#include<bits/stdc++.h>
using namespace std;

 string removeDuplicates(string s) {
        string temp="";
        int i=0;
        while(i < s.length())
        {
            if( !temp.empty() && s[i]== temp.back() )
            {
                temp.pop_back(); 
            }
            else{
                temp.push_back(s[i]);
            }
            i++;
        }
        return temp;
    }

int main()
{
    string s="cssddaacdtreffgglloysufhdfhhfsfduhsudfs";
    string ans=removeDuplicates(s);
    cout<<ans;
}
