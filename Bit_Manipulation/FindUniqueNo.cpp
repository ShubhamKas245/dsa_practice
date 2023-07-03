//  Given N array elements. Every elements repeats twice except 1
// Find unique Number  arr=[5]  => [6 9 6 10 9]

#include <iostream>
using namespace std;

int uniqueNo(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
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
    int unique = uniqueNo(arr, n);
    cout << "Unique No is : ";
    cout << unique << endl;

    return 0;
}
