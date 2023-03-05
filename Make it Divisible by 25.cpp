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
    string s;
    int t,n,i,j,ans;
    cin>>t;
    while(t--) {
        cin>>s;
        int tf=0,fty=0,svf=0,hun=0;
        reverse(s.begin(),s.end());
        ans=0;
        for(i=0; i<s.size(); i++) {
            if(tf==2 or fty==2 or svf==2 or hun==2)
                break;
            if(s[i]=='0') {
                hun++;
                if(!fty)
                    fty++;
            }
            if(s[i]=='2') {
                if(tf)
                    tf++;
            }
            if(s[i]=='7') {
                if(svf)
                    svf++;
            }
            if(s[i]=='5') {
                if(!svf)
                    svf++;
                if(!tf)
                    tf++;
                if(fty)
                    fty++;
            }
            ans++;
        }
        cout<<ans-2<<endl;
    }
    return 0;
}
//25
//50
//75
//00
