#include <bits/stdc++.h>
using namespace std;

void subsequence(string input,string output,int i)
{
    if(i==input.length())
    {
        cout<<"->"<<output<<endl;
        return;
    }
    
    // first include then exclude
    
    // include
    // output.push_back(input[i]);
    // subsequence(input,output,i+1);
    // exclude
    // output.pop_back();
    // subsequence(input,output,i+1);
    
    // first exclude then include
    
    // exclude
    subsequence(input,output,i+1);
    // include
    output.push_back(input[i]);
    subsequence(input,output,i+1);
}
int main()
{
    string input="abc";
    int i=0;
    string output="";
    subsequence(input,output,i);
}
