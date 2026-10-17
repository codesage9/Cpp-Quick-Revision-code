#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> Dynamic_vector ()
{
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix;

    for (int i = 0; i < rows; i++) {
        vector<int> row; // Create a temporary 1D vector for the current row
        for (int j = 0; j < cols; j++) {
            int temp;
            cin >> temp;
            row.push_back(temp); // Build the row dynamically
        }
        matrix.push_back(row); // Insert the complete row into the 2D vector
    }
}

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> vec (row, vector<int> (col, 0));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> vec[i][j];
        }
    }
    return 0;
}