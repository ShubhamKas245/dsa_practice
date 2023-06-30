// Print all the boundries in Clockwise

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "All the boundries of matrix " << endl;
    if (n == 1) // Special case for a 1x1 matrix
    {
        cout << mat[0][0];
    }

    // Print the top row
    for (int i = 0; i < n; i++)
    {
        cout << mat[0][i] << " ";
    }

    // Print the right column
    for (int i = 1; i < n; i++)
    {
        cout << mat[i][n - 1] << " ";
    }

    // Print the bottom row
    for (int i = n - 2; i >= 0; i--)
    {
        cout << mat[n - 1][i] << " ";
    }

    // Print the left column
    for (int i = n - 2; i >= 1; i--)
    {
        cout << mat[i][0] << " ";
    }
    return 0;
}