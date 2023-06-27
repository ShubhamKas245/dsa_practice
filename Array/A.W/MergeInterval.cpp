// Problem Description
// Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).
// You may assume that the intervals were initially sorted according to their start times.

// Problem Constraints
// 0 <= |intervals| <= 105

// Input Format => First argument is the vector of intervals
// second argument is the new interval to be merged

// Output Format => Return the vector of intervals after merging

// Example Input
// Input 1: => Given intervals [1, 3], [6, 9] insert and merge [2, 5] .
// Input 2: => Given intervals [1, 3], [6, 9] insert and merge [2, 6] .

// Example Output
// Output 1: => [ [1, 5], [6, 9] ]
// Output 2: => [ [1, 9] ]

// Example Explanation
// Explanation 1: => (2,5) does not completely merge the given intervals
// Explanation 2: => (2,6) completely merges the given intervals

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> insertInterval(vector<vector<int>> &intervals, vector<int> &newInterval)
{
    vector<vector<int>> mergedIntervals;
    int n = intervals.size();
    int i = 0;

    // Add intervals before newInterval
    while (i < n && intervals[i][1] < newInterval[0])
    {
        mergedIntervals.push_back(intervals[i]);
        i++;
    }

    // Merge overlapping intervals
    while (i < n && intervals[i][0] <= newInterval[1])
    {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }
    mergedIntervals.push_back(newInterval);

    // Add remaining intervals
    while (i < n)
    {
        mergedIntervals.push_back(intervals[i]);
        i++;
    }

    return mergedIntervals;
}

int main()
{
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter the intervals (start and end times): ";
    for (int i = 0; i < n; i++)
    {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<int> newInterval(2);
    cout << "Enter the new interval (start and end times): ";
    cin >> newInterval[0] >> newInterval[1];

    vector<vector<int>> mergedIntervals = insertInterval(intervals, newInterval);

    cout << "Merged intervals: ";
    for (int i = 0; i < mergedIntervals.size(); i++)
    {
        cout << "[" << mergedIntervals[i][0] << ", " << mergedIntervals[i][1] << "] ";
    }
    cout << endl;

    return 0;
}
