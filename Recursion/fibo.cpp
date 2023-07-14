// Priint Fibonacci No

#include <iostream>
using namespace std;

int fibbo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibbo(n - 1) + fibbo(n - 2);
}

int main()
{
    int n;
    cin >> n;
    int fibbonaci = fibbo(n);
    cout << "fibbonaci value of " << n << " : " << fibbonaci << endl;
    return 0;
}