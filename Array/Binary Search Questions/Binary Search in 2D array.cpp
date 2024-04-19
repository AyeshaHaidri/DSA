// Binary Search in a 2D Vector 

#include <bits/stdc++.h>
using namespace std;

int main()
{
vector<vector<int>> matrix = {
{1,2,3},
{4,5,6},
{7,8,9}
};
int target=9;
int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        bool flag=false;
        while(e>=s)
        {
            int i=mid/col;  //IMP
            int j=mid%col;  //IMP
            if(matrix[i][j]==target)
            {
                flag=true;
                break;
            }
            else if(matrix[i][j] > target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        if(flag)
        {
            cout<<"found";
        }
        else{
            cout<<"not found";
        }
}

TC-> O(log (row*col))
SC-> O(1)
