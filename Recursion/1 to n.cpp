// Print numbers from 1 to n using recursion

#include<bits/stdc++.h>
using namespace std;
void print(int n){
if(n==0)
{
return;
}
cout << n << endl;
print(n-1);
}

int main()
{
    int a;
    cin>>a;
    print(a);
    return 0;
}
