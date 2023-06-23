// Max consecutive
// Given a Binary array, we can atmost replace a single 0 with 1, Find max consecutive 1's we can get
// ex=>  0 1 1 1 0 1 1 0 1 1 0  => Google Goldman sachs

#include <iostream>
using namespace std;

int MaxCon(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            int l = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (arr[j] == 1)
                {
                    l++;
                }
                else
                {
                    break;
                    ;
                }
            }
            int r = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == 1)
                {
                    r++;
                }
                else
                {
                    break;
                    ;
                }
            }
            ans = max(ans, l + r + 1);
        }
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
    int count = MaxCon(arr, n);
    cout << "Max Cons length is : ";
    cout << count << endl;
    return 0;
}