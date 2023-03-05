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
    int t,j,n,ans,pos,mx,i;
//    set<int>s;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[n];
        pos=0;
        mx=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        for(i=0; i<n; i++) {
            if(a[i]>i+1) {
                pos=abs(a[i]-i-1);
                if(pos>mx)
                    mx=pos;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
