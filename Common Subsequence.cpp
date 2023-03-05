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
    int t,n,m,i,j,ans;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        int a[n],b[m];
        int flag=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        for(i=0; i<m; i++) {
            cin>>b[i];
        }
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                if(a[i]==b[j]) {
                    flag=1;
                    ans=a[i];
                    break;
                }
                if(flag)
                    break;
            }
        }
        if(flag) {
            cout<<"YES"<<endl;
            cout<<1<<ss<<ans<<endl;
        } else
            cout<<"NO\n";
    }
    return 0;
}
