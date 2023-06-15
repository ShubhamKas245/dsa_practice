// Print sum of all sub array sum

#include <iostream>
using namespace std;

void PrintAllSubArraySum(int arr[], int n)
{
    int total_sum = 0;
    for (int s = 0; s < n; s++)
    {
        int sum = 0;
        for (int e = s; e < n; e++)
        {
            sum += arr[e];
            total_sum += sum;
        }
    }
    cout<<"Total sum : ";
    cout << total_sum << endl;
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
    PrintAllSubArraySum(arr, n);
    return 0;
}