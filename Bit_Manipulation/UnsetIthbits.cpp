// Given N & i, unset ith bits in N

#include <iostream>
using namespace std;

int unsetBits(int n, int i)
{
    int x = ~(1 << i);
    int ans = n & x;
    return ans;
}

int main()
{
    int n, i;
    cout << "Enter the No : ";
    cin >> n;
    cout << "Enter the ith bits : ";
    cin >> i;

    int result = unsetBits(n, i);
    cout << result << endl;
    return 0;
}