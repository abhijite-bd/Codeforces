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
vector<pair<int, int>> movements{
    {-1, 0}, {0, 1}, {1, 0}, {0, -1}};
ll cs = 1;
const int N = 1e3 + 10;
const int M = 1e9 + 7;
char mat[N][N];
int vis[N][N];
int dp[N][N];
int bfs(int i, int j)
{
    memset(vis, 0, sizeof(vis));
    int ans = 0;
    queue<pair<int, int>> p;
    p.push({i, j});
    while (!p.empty())
    {
        auto idx = p.front();
        p.pop();
        if (vis[idx.first][idx.second])
            continue;
        vis[idx.first][idx.second] = 1;
        ans++;
        // ans %= 10;
        for (auto move : movements)
        {
            int x = move.first + idx.first;
            int y = move.second + idx.second;
            // if (dp[x][y] != 0)
            // {
            //     ans += dp[x][y];
            //     continue;
            // }
            if (!check(x, y) or vis[x][y])
                continue;
            if (mat[x][y] == '*')
                continue;
            else
            {
                p.push({x, y});
            }
        }
    }
    return dp[i][j] = ans;
}
int main()
{
    fast();
    int i, j;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (mat[i][j] == '.')
                cout << '.';
            else
            {
                cout << bfs(i, j)%10;
            }
        }
        cout << endl;
    }
    return 0;
}