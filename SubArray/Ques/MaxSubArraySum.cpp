
#include <iostream>
using namespace std;

int MaxSum(int arr[], int n)
{
    int Max = 0;
    for (int s = 0; s < n; s++)
    {
        int sum = 0;
        for (int e = s; e < n; e++)
        {
            sum += arr[e];
            if (sum > Max)
            {
                Max = sum;
            }
        }
    }
    return Max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Maximum = MaxSum(arr, n);
    cout << "MaxiMum : " << Maximum << endl;
    return 0;
}
