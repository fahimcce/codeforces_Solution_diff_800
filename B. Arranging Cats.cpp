#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, countS = 0, countF = 0, ans = 0, ans2 = 0;
        cin >> n;
        string s, f;
        cin >> s >> f;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                countS++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (f[i] == '1')
            {
                countF++;
            }
        }
        if (countS > countF)
        {
            ans = countS - countF;
            for (int i = 0; i < n; i++)
            {
                if (f[i] == '1' && s[i] != '1')
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (f[i] == '1' && s[i] != '1')
                {
                    ans2++;
                }
            }
            cout << ans2 << endl;
        }
    }
    return 0;
}