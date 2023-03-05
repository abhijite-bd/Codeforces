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
    int n,m,rc,rr,t,rd,cd;
    cin>>t;
    while(t--) {
        int ans1=0,ans2=0,ans;
        cin>>n>>m>>rr>>rc>>rd>>cd;
        if(rd==rr or rc==cd)
            cout<<0<<endl;
        else {
            if(rr<rd and rc<cd)
                ans=min(rd-rr,cd-rc);
            else if(rr>rd and rc>cd)
                ans=2*(n-rc)+(rr-rd);
            else if(rr>rd and rc<cd)
                ans=cd-rc;
            else if(rr<rd and rc>cd)
                ans=rd-rr;
            cout<<ans<<endl;
        }
    }
    return 0;
}
