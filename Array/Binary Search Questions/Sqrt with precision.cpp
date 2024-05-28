#include <bits/stdc++.h>
using namespace std;

double Precision(double ans,int num)
{
    int precision;
    cout<<"Enter Precision : ";
    cin>>precision;
    double step=0.1;
    for(int i=0;i<precision;i++)
    {
        double j=ans;
        while(j*j<=num)
        {
            ans=j;
            j+=step;
        }
        step=step/10;
    }
    return ans;
}

int main()
{
        int num=51;
        int l=0;
        int h=num;
        int mid=l+(h-l)/2;
        int ans=0;
        while(l<=h)
        {
            if(mid*mid <=num)
            {
                ans=mid;
                l=mid+1;
            }
            else {
                h=mid-1;
            }
            mid=l+(h-l)/2;
        }
        double root= Precision(ans,num);
        cout<<"Square root is : "<<root<<endl;
        // printf("%0f",root);
}
