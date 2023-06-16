// pairs
// Pair is a term used to combine two distinct values
// Pair offers a technique to keep two disparate objects together in storage.

#include<bits/stdc++.h>
using namespace std;
int main()
{
pair<int,string> p[2];  

p[0] = make_pair(1,"abc");
p[1] = {2,"xyz"};

for(auto pr : p)
{
cout << pr.first << " " << pr.second << endl;
}
return 0;
}
