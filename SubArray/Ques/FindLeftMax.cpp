// find right max and left max of array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int leftMax[n], rightMax[n];
    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }
    rightMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], arr[i]);
    }
    cout << "LeftMax is ";
    for (int i = 0; i < n; i++)
    {
        cout << leftMax[i] << " ";
    }
    cout << endl;
    cout << "RightMax is ";
    for (int i = 0; i < n; i++)
    {
        cout << rightMax[i] << " ";
    }
}