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
    int t,n,i,j;
    cin>>t;
    while(t--) {
        cin>>n;
        string s,ans="\0";
        cin>>s;
        ans+=s[0];
        if(s[0]==s[1]) {
            cout<<ans;
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        } else {
            for(i=0; i<n-1; i++) {
                if(s[i]>=s[i+1])
                    ans+=s[i+1];
                else
                    break;
            }
            cout<<ans;
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
    }
    return 0;
}
