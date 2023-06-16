// Armstrong Number

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int duplicate = n;
int original = n;
int sum = 0;
int count = 0;

while(duplicate != 0)
{
int rem = duplicate % 10;
duplicate = duplicate / 10;
count++;
}

while(n != 0)
{
int rem = n % 10;
sum = sum + pow(rem,count);    //in-built function to calculate power 
n = n / 10;
}

if(original == sum)
{
cout << "Armstrong Number" << endl;
} else {
cout << "Not Armstorong Number" << endl;
}

return 0;
}
