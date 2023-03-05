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
     ll t;
     cin>>t;
     while(t--)
     {
        ll n,i;
        
        cin>>n;
        ll arr[n],ans[n];
        
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            ans[i]=i+1;
        }
   if(n==1)
   {
    cout<<-1<<endl;
    continue;
   }
        for(i=0;i<n;i++)
        {
            if(arr[i]!=ans[i])continue;
            else
            {
                if(i!=n-1)
                {
                    swap(ans[i],ans[i+1]);
                }
            }

        }
        if(arr[n-1]==ans[n-1])
        {
              swap(ans[n-2],ans[n-1]);
        }
       for(i=0;i<n;i++)
       {
        cout<<ans[i]<<" ";
       }
       cout<<endl;
     }
return 0;
}