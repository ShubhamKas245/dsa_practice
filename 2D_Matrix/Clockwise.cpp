// Given a mat[n][n] rotate 90* Clockwise SC:O(1);

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
    // Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // Reverse each row of the transposed matrix
    for (int i = 0; i < n; i++)
    {
        int s = 0, e = m - 1;
        while (s < e)
        {
            swap(mat[i][s], mat[i][e]);
            s++;
            e--;
        }
    }
    cout << "Clockwise matrix " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}