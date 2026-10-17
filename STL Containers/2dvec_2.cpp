#include <iostream>
#include <vector>
using namespace std;

void vec_2D_Creation(int n)
{
    vector<vector<int>> vec (n,vector<int>(n,5));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
}

void Dynamic_Vec(int n)
{
    vector<vector<int>> vec;

    for(int i=0; i<n; i++)
    {
        int col;
        cout << "Enter the col: ";
        cin >> col;
        vector<int> temp;
        for(int j=0; j<col; j++)
        {
            int x;
            cout << "Enter the numbers: ";
            cin >> x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }

    for(vector<int> i: vec)
    {
        for(int j: i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void Dynamic_Vec_inplace(int n)
{
    vector<vector<int>> vec;

    for(int i=0; i<n; i++)
    {
        int col;
        cin >> col;
        vector<int> temp(col);
        for(int j=0; j<col; j++)
        {
            cin >> temp[j];
        }
        vec.push_back(temp);
    }

    for(vector<int> i: vec)
    {
        for(int j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
}

void Direct_inplace(int n)
{
    vector<vector<int>> vec (n, vector<int>(n));

    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> vec[i][j];
        }
    }
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    for(vector<int> i: vec)
    {
        for(int j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
}


int main()
{
    int n;
    cout << "Enter the N: ";
    cin >> n;
    // vec_2D_Creation(n);
    // Dynamic_Vec(n);
    // Dynamic_Vec_inplace(n);
    Direct_inplace(n);
    return 0;
}