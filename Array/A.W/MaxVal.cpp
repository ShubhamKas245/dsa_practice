// Problem Description

// You are given an array of N integers, A1, A2, .... AN. Return the maximum value of f(i, j) for all 1 ≤ i, j ≤ N. f(i, j)
// is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.
// Problem Constraints
// 1 <= N <= 100000
// -109 <= A[i] <= 109
// Example Input
// Input 1:  => A = [1, 3, -1]     Output 1: => 5

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxAbsDifference(vector<int> &A)
{
    int n = A.size();
    int maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int diff = abs(A[i] - A[j]) + abs(i - j);
            maxVal = max(maxVal, diff);
        }
    }

    return maxVal;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int maxDiff = maxAbsDifference(A);
    cout << "The maximum value of f(i, j) is: " << maxDiff << endl;

    return 0;
}
