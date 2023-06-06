// Take input an array A of size N and write to program to print maximum and minimum elements of the inputs.
// the only line of the input would contains a single integer N that reprensts the length of the array followed
// by the N elements of the input array A
// Arr=5 1 2 3 4 5  o/p=5 1

#include <iostream>
#include <climits>
using namespace std;

void MinMax(int arr[], int n)
{
    int Max = INT_MIN, Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > Max)
            ;
        Max = arr[i];
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }

    cout << Max << " " << Min << endl;
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
    MinMax(arr, n);
    return 0;
}