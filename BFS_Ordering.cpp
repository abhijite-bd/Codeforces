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
vector<int> v[N];
vector<int> ans;
vector<bool> vis(N);

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        if (vis[node])
            continue;
        vis[node] = 1;
        ans.pb(node);
        for (auto e : v[node])
        {
            if (vis[e])
                continue;
            q.push(e);
        }
    }
}
void reset()
{
    for (int i = 0; i < N; i++)
    {
        v[i].clear();
        vis[i] = 0;
    }
}
int main()
{
    int t, n, m, x, i, j, v1, v2;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> x;
        for (i = 0; i < m; i++)
        {
            cin >> v1 >> v2;
            v[v1].pb(v2);
            v[v2].pb(v1);
        }
        for (i = 1; i <= n; i++)
        {
            sort(all(v[i]));
        }
        bfs(x);
        reset();
        for (i = 0; i < n; i++)
        {
            cout << ans[i] << ss;
        }
        cout << endl;
        ans.clear();
    }
    return 0;
}