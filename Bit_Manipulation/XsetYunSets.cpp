// Given X Y , set x continous bits & y unset bits

#include <iostream>
using namespace std;

int bits(int num, int x, int y)
{

    int mask = ((1 << x) - 1) << y;
    int ans = num | mask;
    return ans;
}

int main()
{
    int n, x, y;
    cout << "Enter the No : ";
    cin >> n;
    cout << "Enter the  x : ";
    cin >> x;
    cout << "Enter the y : ";
    cin >> y;
    int no = bits(n, x, y);
    cout << "Value : " << no << endl;
    return 0;
}
