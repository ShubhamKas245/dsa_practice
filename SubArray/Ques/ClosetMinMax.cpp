// Given N array elements. find the length of smallest sub array which contains both min and max of sub array
// eg => 1 2 3 1 3 4 6 4 6 3

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int closetMinLength(int arr[], int n)
{
    int minVlaue = *min_element(arr, arr + n);
    int maxValue = *max_element(arr, arr + n);
    int pos_min = -1, pos_max = -1, ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minVlaue)
        {
            pos_min = i;
        }
        if (arr[i] == maxValue)
        {
            pos_max = i;
        }

        if (pos_max != -1 && pos_min != -1)
            ans = min(ans, abs(pos_min - pos_max) + 1);
    }
    return ans;
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
    int totalLength = closetMinLength(arr, n);
    cout << "Closest Min Max length is : ";
    cout << totalLength << endl;
    return 0;
}