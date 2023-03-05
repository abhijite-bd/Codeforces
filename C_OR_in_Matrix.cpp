#include<bits/stdc++.h>
using namespace std;
#define   ss ' ' 
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   fast() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
#define   all(v) v.begin(),v.end()
#define   allr(v) v.rbegin(),v.rend()
#define   endl '\n' 
#define   pi 3.141592653589793
#define   case cout << "Case " << cs++ << ": " 
ll n,m;
bool chk_coor(ll i,ll j){
   if(i<0 || j<0 || i>=n || j>=m)
   {
       return false;
   }
   return true;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9+7;
int main()
{
      ll n,m;
      ll i,j;
      cin>>n>>m;
      ll arr[n][m];
      ll ans1[n][m];
      for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
            ans1[i][j]=arr[i][j];
        }
      }
      ll ans;
      ans=0;
     for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                ll c1,c2;
                c1=0;
                c2=0;
                for(ll k=0;k<m;k++)
                {
                    if(arr[i][k]==0)
                    {
                        c1=1;
                        break;
                    }
                }
                for(ll k=0;k<n;k++)
                {
                    if(arr[k][j]==0)
                    {
                        c2=1;
                        break;
                    }
                }
                if(c1&&c2)
                {
                    ans=1;
                    break;
                }
            }
        }
        if(ans)break;
      }
    if(ans)
    {
        cout<<"NO\n";
    }
    else
    {
       cout<<"YES\n";
    for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                
                for(ll k=0;k<m;k++)
                {
                     ans1[i][k]=0;
                }
                for(ll k=0;k<n;k++)
                {
                    ans1[k][j]=0;
                }
                
            }
        }
        
      }
      for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
            cout<<ans1[i][j]<<" ";
        }
        cout<<endl;
      }

    }
return 0;
}