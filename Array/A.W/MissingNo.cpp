// find first missing positive integer 
// Note your algorithm should run in O(n) time & const space time

#include <iostream>
using namespace std;

int findMissingNo(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (arr[i] != i + 1)
        {
            if (arr[i] <= 0 || arr[i] > n || arr[i] == arr[arr[i] - 1])
                break;

            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }

    return n + 1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int missingNumber = findMissingNo(arr, n);
    cout << "The missing number is: " << missingNumber << endl;
    return 0;
}
