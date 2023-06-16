// Problem Description
// You are given an array of integers A of size N.
// Return the difference between the maximum among all even numbers of A and the minimum among all odd numbers in A.

// Problem Constraints
// 2 <= N <= 1e5
// -1e9 <= A[i] <= 1e9
// There is atleast 1 odd and 1 even number in A

// Input Format
// The first argument given is the integer array, A.

// Output Format
// Return maximum among all even numbers of A - minimum among all odd numbers in A.

// Example Input
// Input 1:   A = [0, 2, 9]  => Output 1:  -7
// Input 2:  A = [5, 17, 100, 1] => Output 2: 99

// Example Explanation
// Explanation 1: =>  Maximum of all even numbers = 2Minimum of all odd numbers = 9ans = 2 - 9 = -7
// Explanation 2: => Maximum of all even numbers = 100Minimum of all odd numbers = 1ans = 100 - 1 = 99

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int diffMaxMin(vector<int> A, int n)

{
    int minOdd = INT_MAX;
    int maxEven = INT_MIN;
    for (int num : A)
    {
        if (num % 2 == 0)
        {
            maxEven = max(maxEven, num);
        }
        else
        {
            minOdd = min(minOdd, num);
        }
    }

    return maxEven - minOdd;
}

int difference(int A[], int n)
{
    int minOdd = INT_MAX;
    int maxEven = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            maxEven = max(maxEven, A[i]);
        }
        else
        {
            minOdd = min(minOdd, A[i]);
        }
    }

    return maxEven - minOdd;
}

int main()
{
    int n, a;
    cin >> n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     v.push_back(a);
    // }

    // int diff = diffMaxMin(v, n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff = difference(arr, n);

    cout << "Difference b/w MaxEven & MinOdd : ";
    cout << diff << endl;

    return 0;
}