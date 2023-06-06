// You have given an integer T (no of test cases). You are given array A and integer B for each test cases. You have to tell wheater B is
// Present or Not  arr= 1 5 4 1 5 9 1 B=5

#include <iostream>
using namespace std;

int findNo(int arr[], int n, int b)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == b)
        {
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
    cout << "The No to find is : ";
    cin >> b;
    int FindOutNo = findNo(arr, n, b);
    cout << FindOutNo << endl;

    return 0;
}