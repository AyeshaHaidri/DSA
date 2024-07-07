#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int maze[][4], int row, int col, int rowEnd, int colEnd, vector<vector<bool>> &visited)
{
    if (maze[row][col] == 1 && visited[row][col] == false && row >= 0 && col >= 0 && row < rowEnd && col < colEnd )
    {
        return true;
    }
    else{
        return false;
    }
}

void findPaths(int maze[][4], int row, int col, int rowEnd, int colEnd, vector<vector<bool>> &visited, string &output)
{
    // base case 
    if (row == rowEnd - 1 && col == colEnd - 1)
    {
        cout << output << " ";
        return;
    }

    // Mark the cell as visited
    visited[row][col] = true;
    
    // Move Left
    if (isSafe(maze, row, col - 1, rowEnd, colEnd, visited))
    {
        output.push_back('L');
        findPaths(maze, row, col - 1, rowEnd, colEnd, visited, output);
        output.pop_back();
    }

    // Move Up
    if (isSafe(maze, row - 1, col, rowEnd, colEnd, visited))
    {
        output.push_back('U');
        findPaths(maze, row - 1, col, rowEnd, colEnd, visited, output);
        output.pop_back();
    }

    // Move Down
    if (isSafe(maze, row + 1, col, rowEnd, colEnd, visited))
    {
        output.push_back('D');
        findPaths(maze, row + 1, col, rowEnd, colEnd, visited, output);
        output.pop_back();
    }
    
    // Move Right
    if (isSafe(maze, row, col + 1, rowEnd, colEnd, visited))
    {
        output.push_back('R');
        findPaths(maze, row, col + 1, rowEnd, colEnd, visited, output);
        output.pop_back();
    }

   

    // Unmark the cell as visited (backtrack)
    visited[row][col] = false;
}

int main()
{
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 1}
    };
    int row = 0;
    int col = 0;
    int rowEnd = 4;
    int colEnd = 4;
    vector<vector<bool>> visited(rowEnd, vector<bool>(colEnd, false));
    string output = "";

    // edge case 
    if (maze[0][0] == 0)
    {
        // the mouse cannot enter 
        cout << "cannot enter invalid inputs!" << endl;
    }
    else
    {
        findPaths(maze, row, col, rowEnd, colEnd, visited, output);
    }
    return 0;
}
