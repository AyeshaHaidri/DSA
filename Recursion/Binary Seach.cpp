
int binarysearch(int arr[],int n,int l,int h,int target)
{
    int mid=(l+h)/2;
    if(l>h)
    {
        return -1;
    }
    if(arr[mid]==target)
    {
        return mid;
    }
    if(arr[mid]>target)
    {
        return binarysearch(arr,n,l,mid-1,target);
    }
    if(arr[mid]<target)
    {
        return binarysearch(arr,n,mid+1,h,target);
    }
    
}

int main()
{
    int arr[]={3,4,6,23,23,23,98};
    int n=7;
    int l=0;
    int h=n-1;
    int target=9;
    int ans=binarysearch(arr,n,l,h,target);
    cout<<ans;
    
}
