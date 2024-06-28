// Segmented sieve 
// a range of numbers are given and the prime numbers in between are to be found.

#include <bits/stdc++.h>
using namespace std;

vector<bool> Sieve(int N)
{
     vector <bool> isPrime (N+1, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i*i <= N; ++i)
    {
      if (isPrime[i])
	{
	    int j = i * i;
	  for (; j <=N; j += i)
	    {
	      isPrime[j] = false;
	    }
	}
    }
    return isPrime;
}


vector<bool> segSieve(int l,int r)
{
    vector<bool> sieve=Sieve(sqrt(r));
    vector<int>basePrimes;
    for(int i=0;i<sieve.size();i++)
    {
        if(sieve[i])
        {
            basePrimes.push_back(i);
        }
    }
    vector<bool>segSeive(r-l+1,true);
    if(l==1 || l==0)
    {
        segSeive[l]=false;
    }
    for(auto prime:basePrimes)
    {
        int first_mul=(l/prime)*prime;
        if(first_mul < l)
        {
            first_mul+=prime;
        }
        int j=max(first_mul,prime*prime);
        while(j<=r)
        {
            segSeive[j-l]=false;
            j+=prime;
        }
    }
    return segSeive;
}

int main()
{
    int l=10;
    int r=130;
    vector<bool> ss=segSieve(l,r);
    for(int i=0;i<ss.size();i++)
    {
        if(ss[i])
        {
            cout<<i+l<<" ";
        }
    }
}
