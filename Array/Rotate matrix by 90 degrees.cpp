//Rotate the matrix of array by 90 degrees to the right

//Brute Force

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    vector<vector<int>> ans(n,vector<int>(n,0));

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            ans[j][n-i-1] = matrix[i][j];
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    vector<vector<int>> ans = rotate(matrix);

    for(auto it : ans)
    {
        for(int ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}

 // T.C => O(n^2)
 // S.C => O(n^2)
