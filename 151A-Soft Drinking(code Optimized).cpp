// For better understanding please check previous answer
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i <= 7; i++)
    {
        cin >> arr[i];
    }
    int initialMin = min(((arr[1] * arr[2]) / arr[6]), (arr[3] * arr[4]));
    cout << min(initialMin, (arr[5] / arr[7])) / arr[0];
}