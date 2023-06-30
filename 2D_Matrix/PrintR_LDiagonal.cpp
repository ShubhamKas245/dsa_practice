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
     cout << "Printing all diagonal Right to Left" << endl;
    
    // Print the diagonals starting from the first column
    for (int j = 0; j < m; j++)
    {
        int row = 0;
        int col = j;
        while (row < n && col >= 0)
        {
            cout << mat[row][col] << " ";
            row++;
            col--;
        }
    }

    // Print the diagonals starting from the last row
    for (int i = 1; i < n; i++)
    {
        int row = i;
        int col = m - 1;
        while (row < n && col >= 0)
        {
            cout << mat[row][col] << " ";
            row++;
            col--;
        }
    }
    
    cout << endl;

    return 0;
}
