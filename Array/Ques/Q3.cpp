// Given an array, Reverse entire arr[]
// Note => arr[] itself should change arr[]= -1 4 7 6 -2 7 8 10

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

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArr(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
