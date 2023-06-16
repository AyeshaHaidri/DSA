// Check if Palindrome Number or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ;
cin>>n;
int temp = n;
int revNum = 0;
while(n != 0)
{
int rem = n % 10;
n = n / 10;
revNum = (revNum * 10) + rem;
}

if(revNum == temp)
{
cout << "palindrome" << endl;
} else {
cout << "Not palindrome" << endl;
}
return 0;
}
