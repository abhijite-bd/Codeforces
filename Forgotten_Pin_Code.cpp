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
int prime(string s)
{
    int n = stoi(s), i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return INT_MAX;
    }
    return n;
    // return 1;
}
int main()
{
    fast();
    int n, i, j, k, l;
    char c;
    j = 0;
    int a[4];
    for (i = 1; i <= 10; i++)
    {
        cin >> c;
        if (c == '*')
        {
            a[j] = (i % 10);
            j++;
        }
    }
    vector<int> v;
    do
    {
        // cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
        if (a[0] == 0)
            continue;
        else
        {
            string s = "";
            s += (a[0] + '0');
            s += (a[1] + '0');
            s += (a[2] + '0');
            s += (a[3] + '0');
            // cout<<s<<endl;
            v.pb(prime(s));
        }
    } while (next_permutation(a, a + 4));
    sort(all(v));
    if (v[0] == INT_MAX)
        cout << ":-(" << endl;
    else
        cout << v[0] << endl;
    return 0;
}