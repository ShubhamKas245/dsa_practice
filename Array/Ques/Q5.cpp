// Given n array elements. Rotate array from last to first by K times =>google,amazone
// k=3 arr[7]= 3 -2 1 4 6 9 8

#include <iostream>
using namespace std;

void reverseArr(int arr[], int n)
{
    int s1 = 0, s2 = n - 1;
    while (s1 <= s2)
    {
        swap(arr[s1], arr[s2]);
        s1++;
        s2--;
    }
}
void reverseKElements(int arr[], int k)
{
    int s = 0, e = k - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
void reverseN(int arr[], int n, int k)
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
    cout << "K = ";
    cin >> k;
    reverseArr(arr, n);
    reverseKElements(arr, k);
    reverseN(arr, n, k);

    cout << "K times reverse Array" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}