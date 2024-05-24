// Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. 
// However, Mirko is only allowed to cut a single row of trees.
// Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), 
// and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact).
// Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, 
// and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, 
// while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).
// Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible.
// Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.


#include<bits/stdc++.h>
using namespace std;
bool MaxHeight(vector<int> &v,int n,int wood,int mid)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>mid)
        {
         sum=sum+(v[i]-mid);   
        }
    }
    if(sum>=wood)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    vector<int> v={20,15,10,17};
    int n=v.size();
    int wood=7;
    int l=0;
    int h=20;
    int mid=l+(h-l)/2;
    int ans=-1;
    while(l<=h)
    {
        if(MaxHeight(v,n,wood,mid))
        {
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        mid=l+(h-l)/2;
    }
    cout<<ans;
}
