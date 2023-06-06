// Reverse the whole array

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int p1 = 0, p2 = n - 1;
    while (p1 <= p2)
    {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

int main()
{
    int n, s, e;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    cout << "Reverse array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}