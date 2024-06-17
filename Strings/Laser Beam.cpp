#include <bits/stdc++.h>
using namespace std;
  int numberOfBeams(vector<string>& bank) {
        int sum=0;
        int a=0;
        for(int i=0;i<bank.size();i++)
        {
            string str=bank[i];
            int count=0;
            for(int j=0;j<str.length();j++)
            {
                char ch=str[j];
                if(ch=='1')
                {
                    count++;
                    sum=sum+a;
                }
            }
            if(count!=0)
            {
                a=count;
            }
        }
        return sum;
    }
int main()
{
   vector<string> bank={"011001","000000","010100","001000"};
   int ans=numberOfBeams(bank);
   cout<<ans<<endl;
}

// TC-> O(m*n) 
// SC-> O(1)
