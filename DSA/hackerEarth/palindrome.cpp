#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
}
string palindrome(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if (s == p)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int g, p;
    int c1 = 0, c2 = 0;
    cin >> g >> p;
    int n;
    cin >> n;
    while (n--)
    {
        int s1, s2;
        cin >> s1 >> s2;
        if (s1 == 1)
            c1++;
        if (s2 == 1)
            c2++;
    }
    if (g == p)
        return (c1 * p) + (c2 * g);
    int maxvalue = 0, minvalue = 0;
    if (c1 > c2)
        return c1 * (min(g, p)) + c2 * (max(g, p));
    else if (c1 == c2)
        return c1 * (max(g, p)) + c2 * (min(g, p));
    else
        return c2 * (min(g, p)) + c1 * (max(g, p));
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cout << solve() << endl;
    }
    return 0;
}