#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
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
    ll t,n,i,j,k;
    cin>>t;
    while(t--) {
        vector<int> v;
        cin>>n>>k;
        string s;
        cin>>s;
        for(j=0; j<min(k,n); j++) {
            for(i=0; i<n; i++) {
                if(i==0) {
                    if(s[i+1]=='1')
                        v.push_back(i);
                }

                else if(i==n-1) {
                    if(s[n-2]=='1')
                        v.push_back(i);
                }

                else {
                    if(s[i]=='0' and (s[i-1]-'0'+s[i+1]-'0')==1)
                        v.push_back(i);
                }
            }
            for(auto e:v)
                s[e]='1';
//                cout<<e<<ss;
        }
        cout<<s<<endl;
    }
    return 0;
}
