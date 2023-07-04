// Problem Description
// Given an array of positive integers A, two integers appear only once, and all the other integers appear twice.
// Find the two integers that appear only once.

// Note: Return the two numbers in ascending order.
// Problem Constraints
// 2 <= |A| <= 100000
// 1 <= A[i] <= 109

// Input Format => The first argument is an array of integers of size N.
// Output Format => Return an array of two integers that appear only once.

// Example Input
// Input 1: => A = [1, 2, 3, 1, 2, 4]
// Input 2: => A = [1, 2]

// Example Output => Output 1: [3, 4]
// Output 2: => [1, 2]

// Example Explanation
// Explanation 1: => 3 and 4 appear only once.
// Explanation 2: => 1 and 2 appear only once.

#include <iostream>
#include <vector>
using namespace std;

vector<int> findUniqueNo(vector<int> &A)
{
    int result = 0;
    for (int num : A)
    {
        result ^= num;
    }
    int rightMostSetBit = result & (-result);
    int num1 = 0, num2 = 0;

    for (int num : A)
    {
        if (num & rightMostSetBit)
        {
            num1 ^= num;
        }
        else
        {
            num2 ^= num;
        }
    }
    if (num1 > num2)
    {
        swap(num1, num2);
    }

    vector<int> ans = {num1, num2};
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> uniqueNo = findUniqueNo(a);
    cout << "Unique Numbers: " << uniqueNo[0] << ", " << uniqueNo[1] << endl;
    return 0;
}