// Given N array elements and start & end index.print reverse array upto
// Given index from [s] to [e] arr= -3 4 2 8 7 9 6 2 10

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n, int s, int e)
{
    int p1 = s, p2 = e;
    while (p1 <= p2)
    {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

int main()
{
    int n, s, e;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> s >> e;
    cout << "Indexs from : " << s << " to " << e<<endl;
    reverseArray(arr, n, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}