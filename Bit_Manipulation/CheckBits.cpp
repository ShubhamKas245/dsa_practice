// Given N ,i check ith bits is set Or not

#include <iostream>
using namespace std;

// bool checkBits(int n, int i)
// {
//     int x = n >> i;
//     if ((x & 1) == 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// Checking bits using left shits

bool checkBits(int n, int i)
{
    int x = 1 << i;
    if ((n & x) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, i;
    cout << "Enter the No : ";
    cin >> n;
    cout << "Enter the ith bits : ";
    cin >> i;

    if (checkBits(n, i))
    {
        cout << "Set bits" << endl;
    }
    else
    {
        cout << "Not set bits" << endl;
    }
    return 0;
}