
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
    cout << "Maximum col sum : ";
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j][i];
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}