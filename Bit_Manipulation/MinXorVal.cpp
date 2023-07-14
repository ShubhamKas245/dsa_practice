// Find minimum xor value in array

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int find_min_xor(int arr[], int n)
{
  sort(arr, arr + n);
  int min_xor = INT_MAX;

  for (int i = 0; i < n - 1; i++)
  {
    int ans = arr[i] ^ arr[i + 1];
    min_xor = min(min_xor, ans);
  }
  return min_xor;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int minimumVal = find_min_xor(a, n);
  cout << "Minimum xor val : " << minimumVal << endl;
  return 0;
}
