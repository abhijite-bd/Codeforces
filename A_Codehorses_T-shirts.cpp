#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n;
    cin>>n;
    vector<string>v(n),p(n);
    map<string,ll>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll c=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        if(mp[p[i]]==0) c++;
        else
        mp[p[i]]--;
    }
cout<<c<<endl;
}