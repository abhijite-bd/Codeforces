#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    ll n,a,b,c,t;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%2==0)
            cout<<n-3<<ss<<2<<ss<<1<<endl;
        else {
            n/=2;
            if(n%2==0)
                cout<<n+1<<ss<<n-1<<ss<<1<<endl;
            else
                cout<<n+2<<ss<<n-2<<ss<<1<<endl;
        }
    }
    return 0;
}
