// Given an array of size N and Q quries of the format s & e;
// Return sum of elements from index S to E;

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
    int s, e;
    cin >> q;
    while (q--)
    {
        int sum = 0;
        cin >> s >> e;
        for (int i = s; i <= e; i++)
        {
            sum += arr[i];
        }
        cout << "Quries Sum from " << s << "to " << e;
        cout << sum << endl;
    }

    return 0;
}