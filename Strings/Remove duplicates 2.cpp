// Brute Force Approach 

#include<bits/stdc++.h>
using namespace std;

bool isSame(char &ch,string &temp, int k_1)
{
    int it=temp.size()-1;
    for(int p=0;p<k_1;p++)
    {
        if(ch!=temp[it])
        {
            return false;
           
        }
         it--;
    }
       return true;
}
   string removeDuplicates(string s, int k)
   {
       string temp="";
       for(int i=0;i<s.length();i++){
           char ch=s[i];
           if(temp.length() < k-1)
           {
               temp.push_back(ch);
           }
           
           else
           {
               if(isSame(ch,temp,k-1))
           {
               for(int j=0;j<k-1;j++)
               {
                   temp.pop_back();
               }
           }
           else{
               temp.push_back(ch);
           }
           
       }
       }
       return temp;
   }
int main()
{
    string s="deeedbbcccbdaa";
    int k=3;
    string ans=removeDuplicates(s,k);
    cout<<ans<<endl;
}

// TC -> O(n*k^2)
// SC -> O(1)


// optimized approach
// two pointer approach

#include<bits/stdc++.h>
using namespace std;

   string removeDuplicates(string s, int k)
   {
       int i=0;
       int j=0;
       vector<int> count(s.length());
       while(j<s.length())
       {
           s[i]=s[j];
           count[i]=1;
           if(i>0 && s[i]==s[i-1])
           {
               count[i]+=count[i-1];
           }
           if(count[i]==k)
           {
               i-=k;
           }
           ++i;++j;
       }
       return s.substr(0,i);
   }
int main()
{
    string s="deeedbbcccbdaa";
    int k=3;
    string ans=removeDuplicates(s,k);
    cout<<ans<<endl;
}

// TC -> O(n)
// SC -> O(n)
