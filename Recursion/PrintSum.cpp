// Print Sum  using recursion

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return n;
    }
    return sum(n - 1) + n;
}
int main()
{
    int n;
    cin >> n;
    int totalsum = sum(n);
    cout << "Totalsum value of " << n << " : " << totalsum << endl;
    return 0;
}