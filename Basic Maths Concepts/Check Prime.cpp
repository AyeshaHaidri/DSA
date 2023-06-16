// Check if number is prime or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int cnt = 0;
if(n==1)
{
    cout<<"1 is neither prime nor composite";
}
for(int i = 2; i < n; ++i)    // Time complexity -> 0(n)
{
if(n % i == 0){
cnt++;
break;
}
}

if(cnt == 0 && n!=1)
{
cout << "Prime Number" << endl;
}
if(cnt != 0 && n!=1)
{
cout << "Not Prime Number" << endl;
}
return 0;
}
