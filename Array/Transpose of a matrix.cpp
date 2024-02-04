// Transpose of a square matrix

#include <iostream>
using namespace std;
void printArray(int arr[4][4], int row,int col)
{
       for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<(arr[i][j])<<" ";
        }
        cout<<endl;
    }
}

void TransposeMatrix(int arr[4][4],int row,int col){
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main()
{
    int arr[4][4]={
        {1,2,3,4},
        {11,2,3,41},
        {11,2,36,4},
        {14,2,31,4}
    };
    int row=4;
    int col=4;
    cout<<"After Transposing"<<endl;
    TransposeMatrix(arr,row,col);
    printArray(arr,row,col);
}
