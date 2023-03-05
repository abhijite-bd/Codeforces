#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll n=s.size(),i,sum=0,ans=0;
    for(i=0; i<n; i++) {
        sum+=s[i]-'0';
    }
    ans=(sum/3)*2;
    sum%3==2?cout<<ans+1<<endl:cout<<ans<<endl;
    return 0;
}
