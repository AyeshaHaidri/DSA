// Check if string is Palindrome or not using Recursion

#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string &s,int start,int end){

if(start > end)
{
return true;
}
if(s[start] != s[end])
{
return false;
}else{
return checkPalindrome(s,++start,--end);
}
}
int main()
{
string s;
cin>>s;
int n = s.size();
int start = 0;
int end = n - 1;

bool ans = checkPalindrome(s,start,end);
if(ans == true)
{
cout << "Palindrome" << endl;
}else{
cout << "Not Palindrome" << endl;
}
return 0;
}
