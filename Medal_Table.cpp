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
bool cmp(pair)
int main()
{
  string x;
  int t,n,i,j,k,l,y;
  cin>>t;
  map<string ,vector<int>>m;
  while(t--)
  {
      cin>>x;
      for (i = 0; i < 3; i++)
      {
          cin>>y;
          m[x].pb(y);
      }
  }
  sort(m.begin(),m.end(),cmp);
  for(auto it:m)
  {
      cout<<it.first<<ss;

  }
return 0;
}