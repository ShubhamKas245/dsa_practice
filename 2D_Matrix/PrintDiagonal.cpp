// Print Diagonal => Left to Right && Right to left

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Print Diagonal Left to Right" << endl;
    int i = 0;
    while (i < n)
    {
        cout << arr[i][i] << " ";
        i++;
    }
    cout << endl;
    cout << "Print Diagonal Right to left" << endl;
    int k = 0, j = m - 1;
    while (j >= 0)
    {
        cout << arr[k][j] << " ";
        k++;
        j--;
    }

    return 0;
}