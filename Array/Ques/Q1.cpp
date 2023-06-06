// Given N array elements ,count no of pairs elements having atleast having 1 element greater than itself
// arr= 3 -2 6 8 4 8 5
#include <iostream>
using namespace std;

int itSelfGreater(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
            cnt++;
    }
    return n - cnt;
}

// Using only 1 for loop
int itSelf(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
            cnt++;
    }
    return n - cnt;
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
    int count = itSelfGreater(arr, n);
    cout << "Total greater than itself : " << count << endl;
    return 0;
}