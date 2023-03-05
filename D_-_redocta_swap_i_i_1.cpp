
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
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define endl '\n'
#define pi 3.14159265359
using namespace std;
int main()
{
  fast();
  string ans = "atcoder";
  string s, pre;
  int i, j, k, l, n;
  cin >> s;
  int sw = 0;
  i = 0;
  while (i < 6)
  {
    if (ans[i] == s[i])
    {
      i++;
      continue;
    }
    else
    {
      int d = find(all(s), ans[i]) - s.begin();
      sw += (d - i);
      // cout<<d<<endl;
      // cout<<s<<endl;
      s.erase(d, 1);
      s = ans.substr(0, i + 1) + s.substr(i, 7 - i);
      // cout<<s<<endl;
    }
    i++;
  }
  cout << sw << endl;
  return 0;
}