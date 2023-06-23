// Find no of triplet i,j,k such that arr[i] < arr[j] < arr[k]
// Ex => 3 4 6 0 2    => Google

#include <iostream>
using namespace std;

int cnt(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int leftSmall = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                leftSmall++;
            }
        }
        int rightLarge = 0;
        for (int k = i + 1; k < n; k++)
        {
            if (arr[i] < arr[k])
            {
                rightLarge++;
            }
        }
        ans = leftSmall + rightLarge;
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
    int count = cnt(arr, n);
    cout << "Total count : ";
    cout << count << endl;

    return 0;
}