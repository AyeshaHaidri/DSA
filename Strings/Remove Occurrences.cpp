// remove all occurrences of a substring

#include<bits/stdc++.h>
using namespace std;

 string removeOccurrences(string s,string part) {
        while(s.find(part) !=string::npos )
        {
            s.erase(s.find(part),part.length());
        }
        return s;
    }

int main()
{
    string s="this dog is a wild dog";
    string part="dog";
    string ans=removeOccurrences(s,part);
    cout<<ans;
}
