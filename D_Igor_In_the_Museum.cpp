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
#define pi 3.141592653589793
#define case cout << "Case " << cs++ << ": "
using namespace std;
ll cs = 1;
const int N = 1010;
const int M = 1e9 + 7;
int n, m;
char mat[N][N];
bool vis[N][N];
multiset<pair<int, int>> s;
vector<pair<int, int>> movements = {
    {-1, 0},
    {1, 0},
    {0, -1},
    {0, 1}};
ll ans =0;
bool valid(int x, int y)
{
    if (mat[x][y] == '*')
        return 0;
    if (x >= 0 and x < n and y < m and y >= 0)
        return 1;
    return 0;
}
void chk(int x, int y)
{
    // if (vis[x][y])
    //     return;
    // vis[x][y] = 1;
    if (x - 1 >= 0 and mat[x - 1][y] == '*')
    {
        s.insert({x - 1, y});
        ans++;
    }
    if (y - 1 >= 0 and mat[x][y - 1] == '*')
    {
        s.insert({x, y - 1});
        ans++;
    }
    if (x + 1 < n and mat[x + 1][y] == '*')
    {
        s.insert({x + 1, y});
        ans++;
    }
    if (y + 1 < m and mat[x][y + 1] == '*')
    {
        s.insert({x, y + 1});
        ans++;
    }

    // cout << x << ss << y << ss << ans << endl;
}
void bfs(int x, int y)
{
    queue<pair<int, int>> pq;
    pq.push({x, y});
    // cout << pq.size() << endl;
    while (!pq.empty())
    {
        auto cell = pq.front();
        x = cell.first;
        y = cell.second;
        pq.pop();
        vis[x][y] = 1;
        chk(x, y);
        // cout << x << ss << y << endl;
        for (auto move : movements)
        {
            int move_x = x + move.first;
            int move_y = y + move.second;

            // cout << move_x << ss << move_y << endl;
            if (vis[move_x][move_y])
                continue;
            if (!valid(move_x, move_y))
                continue;

            if (mat[move_x][move_y] == '.')
                pq.push({move_x, move_y});
            chk(x, y);
            // cout << ans << endl;
        }
       
    }
}
int main()
{
    int t, i, j, k, l;
    cin >> n >> m >> k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        bfs(x, y);
        cout << s.size() << endl;
        // for(auto e:s)
        // {
        //     cout<<e.first+1<<ss<<e.second+1<<endl;
        // }
        // ans = 0;
        s.clear();
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                vis[i][j] = 0;
            }
        }
         cout<<ans<<endl;
        ans=0;
    }
    return 0;
}