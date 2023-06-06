// Given an array elements , check if there exists a pair (i,j) such that arr[i] + arr[j]==K && i!=j
// arr= 3 -2 1 4 3 6 8 3

#include <iostream>
using namespace std;

int countPairs(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }
    return count;
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
    cout << "The value of k : ";
    cin >> k;
    int pairs = countPairs(arr, n, k);
    cout << "Total pairs is " << pairs << endl;
    return 0;
}