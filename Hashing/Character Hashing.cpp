// character hashing

// ASCII Values => a = 97
// int k = 'a'
// 'a' - 'a' = 0
// 'b' - 'a' = 1
// 'c' - 'a' = 2
// ch - 'a'

// Frequency of lowercase characters in a string using hashing 

#include<bits/stdc++.h>
using namespace std;
int main()
{
int hash[26] = {0}; 
string s;
cin >> s;
for(int i = 0; i < s.size(); ++i)
{
hash[s[i] - 'a']++;
}

int q;
cin >> q;
while(q--)
{
char c;
cin >> c;
cout << hash[c - 'a'] << " ";
}
}
