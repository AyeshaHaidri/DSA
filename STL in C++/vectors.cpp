// Vectors are dynamic array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v;
int n;
cin >> n;
for(int i = 0; i < n; ++i)
{
int a;
cin >> a;
v.push_back(a);
}
for(int i = 0; i < v.size(); ++i)
{
cout << v[i] << endl;
}
return 0;
}
// Array of vectors
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v[10];
int N;
cin >> N;
for(int i = 0; i < N; ++i)
{
int n;
cin >> n;
for(int j = 0; j < n; ++j){
int x;
cin >> x;
v[i].push_back(x);
}
}
return 0;
}
// Insertion in Array of vectors
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
for(int i = 0; i < v.size(); ++i)
{
cout << v[i] << " ";
}
cout << endl;
}
int main()
{
vector<int> v[10];
int N;
cin >> N;
for(int i = 0; i < N; ++i)
{
int n;
cin >> n;
for(int j = 0; j < n; ++j){
int x;
cin >> x;
v[i].push_back(x);
}
}
for(int i = 0; i < N; ++i)
{
printVec(v[i]);
}
return 0;
}
// Vector of vectors
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)                 
{
for(int i = 0; i < v.size(); ++i){
cout << v[i] << " ";
}
cout << endl;
}
int main()
{
vector<vector<int>> v;
int N;
cin >> N;
for(int i = 0; i < N; ++i)
{
int n;
cin >> n;
vector<int> temp;
for(int j = 0; j < n; ++j)
{
int x;
cin >> x;
temp.push_back(x);  
}
v.push_back(temp);
}
return 0;
}
