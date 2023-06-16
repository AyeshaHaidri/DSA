// count no. of digits

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ;
cin>>n;
int count = 0;
while(n != 0)    
{
int rem = n % 10;
n = n / 10;
count++;
}
cout << count;
return 0;
}
