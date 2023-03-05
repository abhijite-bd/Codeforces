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
int main()
{
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        priority_queue<pair<int, int>> pq;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < k; i++)
        {
            pq.push({a[i], i});
        }
        auto it = pq.top();
        cout << it.first << ss;
        while (i < n)
        {
            pq.push({a[i], i});
            i++;
            while (1)
            {
                auto it = pq.top();
                int loc = it.second;
                if (it.second >= i - k)
                {
                    cout << it.first << ss;
                    break;
                }
                pq.pop();
            }
        }
        cout << endl;
    }
    return 0;
}