// find equilibrium index whose left side==right side

#include <iostream>
using namespace std;

void printPrefixSum(int arr[], int n, int ps[])
{
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }
}

int equilibriumIndex(int arr[], int n, int ps[])
{

    ps[0] = arr[0];
    for (int i = 1; i <= n - 2; i++)
    {
        int leftSum = ps[i - 1];
        int rightSum = ps[n - 1] - ps[i];
        if (leftSum == rightSum)
        {
            return i;
        }
    }
    return -1;
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
    int ps[n];
    printPrefixSum(arr, n, ps);
    int index = equilibriumIndex(arr, n, ps);
    cout << "Index is ";
    cout << index << endl;
}