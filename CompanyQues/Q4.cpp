// Google => Given an array of Size N initialized with 0.
// Given Q quries of S , e val. Add the given val to all index from s to e
// (both included) Return the final state of array.
// arr = [ 0 0 0 0 0 0 0 ]

#include <iostream>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " Quries : ";
    cin >> q;
    while (q--)
    {
        int s, e, val;
        cout << " start to end  & val : ";
        cin >> s >> e >> val;
        arr[s] += val;
        arr[e + 1] -= val;
    }
    int ps[n];
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }
    cout << "Final state of array : ";
    for (int i = 0; i < n; i++)
    {
        cout << ps[i] << " ";
    }
    return 0;
}
