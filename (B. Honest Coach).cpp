#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 2];
        vector<int> numbers;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 2)
        {
            int f = max(arr[0], arr[1]);
            int u = min(arr[0], arr[1]);

            cout << f - u << endl;
        }
        else
        {
            sort(arr, arr + n);
            for (int i = 0; i < n - 1; i++)
            {
                int b = arr[i + 1] - arr[i];
                numbers.push_back(b);
            }
            sort(numbers.begin(), numbers.end());
            cout << numbers[0] << endl;
        }
    }
}