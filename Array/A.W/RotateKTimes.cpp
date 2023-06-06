// Rotate the array K times

#include <iostream>
using namespace std;

void reverseArr(int arr[], int n)
{
    int s = 0, e = n - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void reverseK(int arr[], int k)
{
    int s = 0, e = k - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
void reverseKN(int arr[], int n, int k)
{
    int s = k, e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    reverseArr(arr, n);
    reverseK(arr, k);
    reverseKN(arr, n, k);
    cout << "K times reverse Array" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
