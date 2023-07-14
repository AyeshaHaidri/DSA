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


// Optimal Solution

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();

    for(int i = 0; i < n - 1; ++i)  // O(n)
    {
        for(int j = i + 1; j < n; ++j)  // O(n)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i = 0; i < n; ++i)  // O(n)
    {
        reverse(matrix[i].begin(),matrix[i].end()); // O(n/2)
    }

}

int main()
{
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };


    rotate(matrix);

    for(auto it : matrix)
    {
        for(int ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    // T.C => O(n*n) + O(n*n/2) => O(n^2)
    // S.C => O(1)

    return 0;
}


