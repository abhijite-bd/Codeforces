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
    int t,n,i,j,ans,curr;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[n];
        ans=1;
        int die=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        curr=0;
        for(i=0; i<n; i++) {
            if(i+1<n) {
                if(a[i]==0 and a[i+1]==0) {
                    die=1;
                    break;
                }
            }
            if(curr and a[i])
                ans+=5;
            else
                ans+=a[i];
            curr=a[i];
        }
        if(die)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
