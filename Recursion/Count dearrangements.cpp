#include<iostream>
using namespace std;

// for one element there is n-1 possible positions ie dearrangements 
// so the remaining elements have two cases 
// either there remains n-2 elements if two elements are swapped with each other 
// other case is that if one element is placed in place of other and the other element is not placed at the position of swapped element

int dearrangements(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    return (n-1)*(dearrangements(n-1)+dearrangements(n-2));
}

int main()
{
    int num=4;
    int ans=dearrangements(num);
    cout<<ans<<endl;
}
