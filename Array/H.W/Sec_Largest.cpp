// Find second Largest

#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[idx])
            {
                idx = i;
            }
        }
        int secIdx = -1;
        for (int i = 0; i < n; i++)
        {
            if (i != idx)
            {
                secIdx = max(secIdx, arr[i]);
            }
        }
        cout<<"Second Largest Element : ";
        cout << secIdx << endl;
    }
    return 0;
}