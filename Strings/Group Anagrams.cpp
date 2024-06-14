#include <bits/stdc++.h>
using namespace std;
int main()
{
     vector<string> strs={"tea","ate","tae","kkl","kio"};
         for(int i=0;i<strs.size();i++)
         {
            sort(strs[i].begin(),strs[i].end());
         }
         for(int i=0;i<strs.size();i++)
         {
            cout<<strs[i]<<" ";
         }
         
}
