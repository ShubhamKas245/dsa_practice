// Problem Description
// You have an array A with N elements. We have two types of operation available on this array :
// We can split an element B into two elements, C and D, such that B = C + D.
// We can merge two elements, P and Q, to one element, R, such that R = P ^ Q i.e., XOR of P and Q.
// You have to determine whether it is possible to convert array A to size 1, containing a single element equal to 0 after several splits and/or merge?

// Problem Constraints
// 1 <= N <= 100000
// 1 <= A[i] <= 106

// Input Format => The first argument is an integer array A of size N.
// Output Format => Return "Yes" if it is possible otherwise return "No".

// Example Input
// Input 1:  => A = [9, 17]
// Input 2: =>  A = [1]

// Example Output
// Output 1: => Yes
// Output 2: =>  No

// Example Explanation
// Explanation 1:
// Following is one possible sequence of operations -
//  1) Merge i.e 9 XOR 17 = 24
//  2) Split 24 into two parts each of size 12
//  3) Merge i.e 12 XOR 12 = 0
//  As there is only 1 element i.e 0. So it is possible.
// Explanation 2:
// There is no possible way to make it 0.

#include <iostream>
#include <vector>
using namespace std;

string solve(vector<int> &a)
{
    int i = 0, ctr = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 != 0)
        {
            ctr++;
        }
    }
    if (ctr % 2 != 0)
    {
        return "No";
    }
    else
    {
        return "Yes";
    }
}

int main()
{
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    vector<int> A(N);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Step 5: Check if array can be converted to 0
    string result = solve(A);
    cout << result << endl;

    return 0;
}