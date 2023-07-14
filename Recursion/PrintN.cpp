// Print 1 to N numbers  using recursion

#include <iostream>
using namespace std;

void naturalNumbers(int n)
{
    if (n == 1)
    {
        cout << n << endl;
        return;
    }
    naturalNumbers(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    cout << " Natural No from 1 to " << n << endl;
    naturalNumbers(n);
    return 0;
}