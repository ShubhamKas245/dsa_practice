// given a char[], calculate no of pairs i,j such that i<j s[i]=='a' && s[j]='g'
// Note : All characters are lower case
// eg => b a a g d c a g

#include <iostream>
using namespace std;

int pairs(char arr[], int n)
{
    int cnt = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 'g')
        {
            cnt++;
        }
        if (arr[i] == 'a')
        {
            ans = ans + cnt;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pair = pairs(arr, n);
    cout << "Total pairs of ag is : ";

    cout << pair << endl;
    return 0;
}