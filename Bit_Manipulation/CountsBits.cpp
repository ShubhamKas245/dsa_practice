

#include <iostream>
using namespace std;

int totalSetBits(int a)
{
    int ans = 0;
    while (a != 0)
    {
        a = a & (a - 1);
        ans++;
    }
    return ans;
}

int main()
{
    int a;
    cin >> a;
    int cnt = totalSetBits(a);
    cout << "Total sets bits :  " << cnt << endl;
    return 0;
}