#include<bits/stdc++.h>
using namespace std;
void Countsort(int *input_array,int size,int range)
{
     int count_array[range];
     int output_array[size];
    //make an empty array of range size
    for(int i=0;i<range;++i)
    {
        count_array[i]=0;
    }
    //count the occurrence if each element
    for(int i=0;i<size;++i)
    {
        ++count_array[input_array[i]];
    }
    //cumulative addition of each element of the array
    for(int i=1;i<range;++i)
    {
        count_array[i]=count_array[i]+count_array[i-1];
    }
    // placing input array elements into output array in proper
	//  positions such that the result is a sorted array in ASC order
    for(int i=0;i<size;++i)
    {
        output_array[--count_array[input_array[i]]]=input_array[i];
    }
    //copying data
    for(int i=0;i<size;++i)
    {
        input_array[i]=output_array[i];
    }
}
int main()
{
    int size=8;
    int range=10;
    int input_array[size]={5,4,2,1,3,9,8,7};
    Countsort(input_array,size,range);
    for(int i=0;i<size;++i)
    {
      cout<<input_array[i]<<" ";
    }
    return 0;
}
