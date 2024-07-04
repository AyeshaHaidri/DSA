#include <bits/stdc++.h>
using namespace std;

    string numberToWords(int num,vector<pair<int,string>> mp) {
        // base case
        if(num==0)
        {
            return "Zero";
        }
        
        for(int i=0;i<mp.size();i++)
        {
            if(num>=mp[i].first)
            {
                string a="";
                if(num>=100) // kyunki agar 100 se kam rha to mp mein mil hi jaega, recursion to uske liye lagana hoga na jab hmko nikalna ho ki kitna million ya kitna billion ya kitna thousand
                {
                    a=numberToWords(num/mp[i].first,mp) + " ";
                }
                string b=mp[i].second;
                string c="";
                if(num%mp[i].first!=0) // agar koi remainder hi nhi h iska mtlb string b tk mein hi complete ho gaya h
                {
                    c=" " + numberToWords(num % mp[i].first,mp);
                }
                  return a+b+c;
            }
        }
     return ""; 
    }
    
int main()
{
    
vector<pair<int,string>> mp = { {1000000000, "Billion"},{1000000, "Million"},{1000, "Thousand"},{100, "Hundred"},{90, "Ninety"},
        {80, "Eighty"},
        {70, "Seventy"},
        {60, "Sixty"},
        {50, "Fifty"},
        {40, "Forty"},
        {30, "Thirty"},
        {20, "Twenty"},
        {19, "Nineteen"},
        {18, "Eighteen"},
        {17, "Seventeen"},
        {16, "Sixteen"},
        {15, "Fifteen"},
        {14, "Fourteen"},
        {13, "Thirteen"},
        {12, "Twelve"},
        {11, "Eleven"},
        {10, "Ten"},
        {9, "Nine"},
        {8, "Eight"},
        {7, "Seven"},
        {6, "Six"},
        {5, "Five"},
        {4, "Four"},
        {3, "Three"},
        {2, "Two"},
        {1, "One"} 
};
    int num=12345;
    string ans=numberToWords(num,mp);
    cout<<ans;
}
