// Given an array A and integer B . A pair(i,j) in the array is good pair if i!=j
// and (A[i]+A[j]==B). Check good pair exist or not
// A=[1 2 3 4] B=7

#include <iostream>
using namespace std;

int goodPairs(int arr[], int n, int b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == b)
                return 1;
        }
    }
    return 0;
}

int main()
{
    int n, b;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    int goodPair = goodPairs(arr, n, b);
    cout << goodPair << endl;
    return 0;
}