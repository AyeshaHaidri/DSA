// lambda functions

#include<bits/stdc++.h>
using namespace std;
int main()
{
auto sum = [](int x,int y){return x + y;}(10,12);
cout << sum << endl;
return 0;
}
