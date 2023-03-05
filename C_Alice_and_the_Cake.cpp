#include <bits/stdc++.h>
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define ss ' '
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)
#define pb push_back

using namespace std;
int main()
{
    ll n, i, j, k, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll sum = 0;
        ll a[n];
        map<ll, int> m;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
            sum += a[i];
        }
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        priority_queue<ll> pq;
        pq.push(sum);
        while (pq.size() < n)
        {
            ll x = pq.top();
            pq.pop();
            ll p = x / 2;
            ll q = (x + 1) / 2;

            if (m.count(p))
                m[p]--, n--;
            else
                pq.push(p);

            if (m[p] == 0)
                m.erase(p);
                
            if (m.count(q))
                m[q]--, n--;
            else
                pq.push(q);

            if (m[q] == 0)
                m.erase(q);
        }
        if (pq.size() == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}