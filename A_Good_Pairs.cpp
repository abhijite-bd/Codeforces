#include <bits/stdc++.h>
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define ss ' '
#define fast()                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(NULL);                \
  cout.tie(NULL)
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)
#define pb push_back
using namespace std;
int main()
{
  ll n, t, i;
  cin >> t;
  while (t--)
  {
    cin >> n;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      v.pb(x);
    }
    int mi = 0, mxi = 0;
    for (i = 0; i < n; i++)
    {
      if (v[i] > v[mxi])
        mxi = i;
      if (v[i] < v[mi])
        mi = i;
    }
    cout << 1 + mi << ss << 1 + mxi << endl;
  }
  return 0;
}