#include <bits/stdc++.h>
using namespace std;
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
#define pi 3.141592653589793
#define case cout << "Case " << cs++ << ": "
ll n, m;
bool check(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
bool closebracket(char c)
{
    if (c == ')' or c == '}' or c == '>' or c == ']')
        return 1;
    return 0;
}
bool match(char c1, char c2)
{
    if (c1 == '(' and c2 == ')')
        return 1;
    if (c1 == '{' and c2 == '}')
        return 1;
    if (c1 == '[' and c2 == ']')
        return 1;
    if (c1 == '<' and c2 == '>')
        return 1;
    return 0;
}
int main()
{
    string s;
    stack<char> st;
    cin >> s;
    ll ans = 0;
    ll i, n, j, k, l;
    n = s.size();
    i = n - 1;
    int flag = 1;
    while (i >= 0)
    {
        if (closebracket(s[i]))
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                flag = 0;
                break;
            }
            if (!match(s[i], st.top()))
                ans++;
            st.pop();
        }
        i--;
    }
    if (flag and st.empty())
        cout << ans << endl;
    else
        cout << "Impossible\n";
    return 0;
}