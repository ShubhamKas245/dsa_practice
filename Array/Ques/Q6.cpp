// Given an array of Size N initialized with 0. Given Q quries of index (i) & value (v).
// Add the given value to all the index >=i. Return the final state of the array.
// A [0 0 0 0 0 0 ]

#include <iostream>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "No of quries : ";
    cin >> q;
    while (q--)
    {
        int index, value;
        cin >> index >> value;
        arr[index] += value;
    }
    int ps[n];
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }
    cout << "final state of array : ";
    for (int i = 0; i < n; i++)
    {
        cout << ps[i] << " ";
    }
    return 0;
}