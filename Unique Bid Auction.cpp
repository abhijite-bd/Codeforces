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
    int t,n,i,j,x,f,ans;
    cin>>t;
    while(t--) {
        int f=0;
        cin>>n;
        map<int,int>mp;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto e:mp) {
            if(e.second==1) {
                for(i=0; i<n; i++) {
                    if(a[i]==e.first) {
                        ans=i+1;
                        f=1;
                        break;
                    }
                }
                if(f)
                    break;
            }
        }
        if(f)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
