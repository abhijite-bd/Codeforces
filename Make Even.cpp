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
    int t,i,n;
    string s;
    cin>>t;
    while(t--) {
        int flag=0;
        cin>>s;
        n=s.size();
        if((s[n-1]-'0')%2==0)
            cout<<0<<endl;
        else {
            for(i=0; i<n; i++) {
                if((s[i]-'0')%2==0) {
                    flag=1;
                    break;
                }
            }
            if(flag)
                i+1>=2?cout<<2<<endl:cout<<1<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}
