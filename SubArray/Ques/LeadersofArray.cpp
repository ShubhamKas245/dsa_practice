// Given an arr[n] you have to count leaders in arr[]
// an ele is leader if it is strictly greater than max of elements in its right
// ex=> 15 -1 7 2 5 4 2 3

#include <iostream>
using namespace std;

int leaders(int arr[], int n)
{
    int rightMax = arr[n - 1], cnt = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > rightMax)
        {
            rightMax = arr[i];
            cnt++;
        }
    }
    return cnt;
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
    int totalLeaders = leaders(arr, n);
    cout << "Total greater elements right side Is : ";
    cout << totalLeaders << endl;
    return 0;
}