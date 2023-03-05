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
    fast();
    int n,m,t,i,j,k;
    cin>>n>>m;
    string s1[n+2],s2[m+2];
    for(i=1; i<=n; i++) {
        cin>>s1[i];
    }
    for(i=1; i<=m; i++) {
        cin>>s2[i];
    }
    cin>>t;
    while(t--) {
        cin>>k;
        s1[0]=s1[n];
        s2[0]=s2[m];
        cout<<s1[k%n]+s2[k%m]<<endl;
    }
    return 0;
}
