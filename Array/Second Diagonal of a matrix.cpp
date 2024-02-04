#include <iostream>
using namespace std;

void SecondDiagonal(int arr[3][4], int row,int col)
{
      for(int i=0;i<row;i++)
      {
          for(int j=0;j<col;j++){
            if(i==(col-(j+1))){
                cout<<(arr[i][j])<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][4]={
        {1,2,3,4},
        {11,2,3,41},
        {11,2,36,4}
    };
    int row=3;
    int col=4;
    SecondDiagonal(arr,row,col);
}
