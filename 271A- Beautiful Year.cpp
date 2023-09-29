#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;
void spart(int year)
{
    int count = 0;
    stringstream ss;
    ss << year;
    string s;
    ss >> s;
    if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])
    {
        int a = stoi(s);
        cout << a << endl;
    }
    else
    {
        spart(year + 1);
    }
}
int main()
{
    int year;
    cin >> year;
    spart(year + 1);
    return 0;
}