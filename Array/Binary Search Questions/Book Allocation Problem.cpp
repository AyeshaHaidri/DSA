// You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the sum of maximum number of pages in a book allotted to a student should be minimum, out of all possible permutations.
// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<int> &v,int book,int students,int mid)
{
    int pagesum=0;
    int studentcount=1;
    for(int i=0;i<book;i++)
    {
         if(pagesum + v[i] <=mid)
         {
             pagesum+=v[i];
         }
         else{
             studentcount++;
             if(studentcount>students || v[i]>mid)
             {
                 return false;
             }
             pagesum+=v[i];
             
         }
    
    }
    return true;
   
}
int main()
{
    vector<int> v={12,34,67,90};
    int book=v.size();
    int students=2;
    int l=0;
    int h=v[0]+v[1]+v[2]+v[3];
    int mid=(l+h)/2;
    if(students>book)
    {
        return -1;
    }
    int ans=-1;
    while(l<=h)
    {
         mid=(l+h)/2;
        if(isPossibleSolution(v,book,students,mid))
        {
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
       
    }
    cout<<ans;
}
