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
int n, k, i, j;
deque<pair<int, int>> a;
int printpair()
{
    pair<int, int> q=a.front();
    int x = q.first;
    int y = q.second;
    if (x <= k)
        a.pop_front();
    else
    {
        x -= k;
        a.pop_front();
        a.push_back({x,y});
    }
}
void ans(pair<int, int> q)
{

    int b = q.second;
    cout << b << endl;
}

int main()
{
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a.push_back({x, i});
    }
    while (a.size() != 1)
    {
        printpair();
    }
    ans(a.front());
    return 0;
}