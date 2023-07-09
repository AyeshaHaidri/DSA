// swap two numbers without using a third variable 
// exor is a bitwise operator
// x ^ x = 0
// x ^ 0 = x

#include<bits/stdc++.h>
using namespace std;
int main()
{
int a ;
cin>>a;
int b ;
cin>>b;
a = a ^ b;
b = b ^ a;
a = a ^ b;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
return 0;
}
