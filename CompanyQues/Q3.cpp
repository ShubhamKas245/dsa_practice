// Given an array of size N. find & return the max sum of any sub array
// ex=> -2 3 4 -1 5 -10 7

#include <iostream>
using namespace std;

// using kadene alogo
int MaxSum(int arr[], int n)
{
    int mx_sum = arr[0], curr_sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        curr_sum = curr_sum + arr[i];
        mx_sum = max(mx_sum, curr_sum);
    }

    return mx_sum;
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
    int MaximumSum = MaxSum(arr, n);
    cout << "Maximum sub array sum : ";
    cout << MaximumSum << endl;
    return 0;
}