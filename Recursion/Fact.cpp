// Print factorial using recursion

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact(n - 1) * n;
}

int main()
{
    int n;
    cin >> n;
    int factorial = fact(n);
    cout << "Factorial value of " << n<< " : " << factorial << endl;
    return 0;
}