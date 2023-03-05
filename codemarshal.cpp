#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tc;
    cin>>tc;
    tc++;
    while(tc--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>>v(n+1);
        vector<ll>p[n+1];
        for(int i=1;i<=n;i++){
            ll id,sl,pn,m;
            cin>>id>>sl>>pn>>m;
            v[id].first=sl;
            v[id].second=pn;
            for(int j=1;j<=m;j++)
            {
                ll x;
                cin>>x;
                p[id].push_back(x);
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<" ";
            for(int j=0;j<p[i].size();j++)
            cout<<p[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
}