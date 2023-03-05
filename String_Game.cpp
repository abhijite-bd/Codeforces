#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, k, l;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int flag = 1;
        map<int, int> m;
        for (i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        for (auto e : m)
        {
            if (e.second % 2)
                flag = 0;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}