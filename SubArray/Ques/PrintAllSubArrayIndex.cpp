// Printing all sub arrays sum starting at index 2;

#include <iostream>
using namespace std;

void PrintArray(int arr[], int n, int s)
{
    for (int i = s; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int n, s;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> s;
    PrintArray(arr, n, s);
    return 0;
}
