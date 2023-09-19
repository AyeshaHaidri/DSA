// bit manipulation in c++
// set-> 1, reset-> 0, toggle->0 to 1/ 1 to 0
// left shift-> '<<' , right shift-> '>>'

// check if ith bit is set or not 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; //number 
    int i;
    cin>>i; //ith bit
    if(n & (1<<i))
    {
        cout<<"set"<<endl;
    }
    else{
        cout<<"unset"<<endl;
    }
    return 0;
}

// check if ith bit is unset or not 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; //number 
    int i;
    cin>>i; //ith bit
    if(n | (1<<i))
    {
        cout<<"unset"<<endl;
    }
    else{
        cout<<"set"<<endl;
    }
    return 0;
}
