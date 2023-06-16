// Problem Description
// Little Ponny is given an array, A, of N integers. In a particular operation, he can set any element of the array equal to -1.

// He wants your help in finding out the minimum number of operations required such that the maximum element of the resulting array is B. If it is not possible, then return -1.

// Problem Constraints
// 1 <= |A| <= 105

// 1 <= A[i] <= 109

// Input Format
// The first argument of input contains an integer array, A.

// The second argument of input contains an integer, B.

// Output Format
// Return an integer representing the answer.

// Example Input
// Input 1:

//  A = [2, 4, 3, 1, 5] B = 3
// Input 2:

//  A = [1, 4, 2] B = 3

// Example Output
// Output 1:

//  2
// Output 2:

//  -1

// Example Explanation
// Explanation 1:

//  We need to remove 4 and 5 to make 3 the biggest element.
// Explanation 2:

//  As 3 doesn't exist in the array, the answer is -1.

#include <iostream>
using namespace std;

int MinimumOperation(int arr[], int n, int B)
{
    int flag = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == B)
            flag = 1;
        if (arr[i] > B)
            cnt++;
    }
    if (flag == 0)
    {
        return -1;
    }
    else
    {
        return cnt;
    }
}

int main()
{
    int n, b;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    int ans = MinimumOperation(arr, n, b);
    cout << "Minimum no of operation : " << ans << endl;
    return 0;
}