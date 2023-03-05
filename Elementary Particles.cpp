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
    int t,n,i;
    cin>>t;
    while(t--) {
        int ans=-1;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        map<int,int>mp;

        for(i=0; i<n; i++) {
            if(mp.find(a[i])==mp.end()) {
                mp[a[i]]=i;
                continue;
            }
            int idx=mp[a[i]];
            int  start=idx;
            int end=n-i-1;
            ans=max(ans,start+end+1);
            mp[a[i]]=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}
