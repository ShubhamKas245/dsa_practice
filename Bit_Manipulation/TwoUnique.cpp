// Given array A of N elements eveery no has its duplicate except for 2
// no .find these 2 unique nos.

#include <iostream>
#include <vector>
using namespace std;

void two_uniuqNo(int arr[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x ^= arr[i];
    }
    int pos;
    for (int i = 0; i < 30; i++)
    {
        if (x & (1 << i))
        {
            pos = i;
            break;
        }
    }
    int Xor1 = 0, Xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & (1 << pos))
        {
            Xor2 = Xor2 ^ arr[i];
        }
        else
        {
            Xor1 = Xor1 ^ arr[i];
        }
    }
    cout << "Unique Val : " << Xor1 << " " << Xor2 << endl;
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
    two_uniuqNo(arr, n);
    return 0;
}