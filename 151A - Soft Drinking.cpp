#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i <= 7; i++)
    {
        cin >> arr[i];
    }
    int totalDrinks = arr[1] * arr[2];
    int finalDrinks = totalDrinks / arr[6];
    int totalLimeSlides = arr[3] * arr[4];
    int totalSalt = arr[5] / arr[7];
    int initialMin = min(finalDrinks, totalLimeSlides);
    cout << min(initialMin, totalSalt) / arr[0];
}
