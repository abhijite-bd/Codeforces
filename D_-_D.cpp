#include <bits/stdc++.h>
#define ss ' '
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define endl '\n'
#define pi 3.14159265359
using namespace std;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
string rev(string s)
{
    int n = s.size(), i;
    for (i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
            continue;
        else if (s[i] >= 'a' and s[i] <= 'z')
            s[i] -= 32;
        else
            s[i] += 32;
    }
    // cout << s;
    return s;
}
int main()
{
    int t, n, i, j, k, l;
    string s1, s2;
    cin >> s1 >> s2;
    n = s1.size();
    if (s1 == s2)
        cout << "Yes\n";
    else if (rev(s1) == s2)
        cout << "Yes\n";
    else if (isdigit(s1[0]) and s1.substr(1, n - 1) == s2)
        cout << "Yes\n";
    else if (isdigit(s1[n - 1]) and s1.substr(0, n - 1) == s2)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}