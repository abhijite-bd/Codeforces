#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss ' ' 
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
#define   all(v) v.begin(),v.end()
#define   allr(v) v.rbegin(),v.rend()
#define   endl '\n' 
using namespace std;
int main()
{
  int t,n,i,j,k;
  cin>>t;
  while(t--)
  {
      cin>>n;
      map<int,int>m;
      int x;
      for (i = 0; i < n; i++)
      {
          cin>>x;
          m[x]++;
      }
      int flag=1,ans;
      for(auto e:m)
      {
          if(e.second>=3)
          {
              flag=0;
              ans=e.first;
              break;
          }
      }
      if(flag)
      cout<<-1<<endl;
      else
      cout<<ans<<endl;
  }
return 0;
}