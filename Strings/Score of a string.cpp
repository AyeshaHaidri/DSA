#include<bits/stdc++.h>
using namespace std;

    int scoreOfString(string s) {
        int i=0; int sum=0;
        while(i<s.length()-1)
        {
            int diff=abs(int(s[i])-int(s[i+1]));
            sum=sum+diff;
            i++;
        }
        return sum;
    }
int main()
{
    string s="zaz";
    int r=scoreOfString(s);
    cout<<r;
}
