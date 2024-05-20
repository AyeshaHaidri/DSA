// Dilpreet wants to paint his dog's home that has n boards with different lengths. 
// The length of ith board is given by arr[i] where arr[] is an array of n integers.
// He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board. 
// The problem is to find the minimum time to get this job done if all painters start together with the 
// constraint that any painter will only paint continuous boards, say boards numbered {2,3,4} or only 
// board {1} or nothing but not boards {2,4,5}.


class Solution
{
  public:
  bool PainterCanPaint(int arr[], int n, int k,long long mid)
  {
      long long lengthsum=0;
      int paintercount=1;
      for(int i=0;i<n;i++)
      {
          if(lengthsum + arr[i] <=mid)
          {
              lengthsum+=arr[i];
          }
          else{
              paintercount++;
              lengthsum=arr[i];
              if(paintercount>k || arr[i]>mid)
              {
                  return false;
              }
          }
      }
      return true;
  }
    long long minTime(int arr[], int n, int k)
    {
        long long l=0;
        long long sum=0;
        long long h=accumulate(arr,arr+n,sum);
        // long long mid=l+(h-l)/2;
        long long ans=-1;
        
        while(l<=h)
        {
            long long mid=l+(h-l)/2;
            if(PainterCanPaint(arr,n,k,mid))
            {
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
