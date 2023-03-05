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
    int t,n,i,j,a;
    cin>>t;
    while(t--) {
        cin>>n;
        int ans=0,zero=0;
        map<int,int>mp;
        for(i=0; i<n; i++) {
            cin>>a;
            if(a==0) {
                if(zero==0) {
                    zero++;
                    ans++;
                }
            } else if(mp[a]==0) {
                mp[a]=1;
                ans++;
            } else {
                if(mp[-a]!=1) {
                    mp[-a]=1;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
