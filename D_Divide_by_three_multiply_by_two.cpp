#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss ' ' 
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
ll three(ll n)
{
    ll ans=0;
    while(n%3==0)
    {
        ans++;
        n/=3;
    }
    return ans;
}
int main()
{
  ll t,n,i,j;
  cin>>n;
  vector<pair<ll,ll>>v(n);
  for (i = 0; i < n; i++)
  {
      cin>>v[i].second;
      v[i].first=-three(v[i].second);
  }
  sort(v.begin(),v.end());
  for (i = 0; i < n; i++)
  {
      cout<<v[i].second<<ss;
  }
return 0;
}