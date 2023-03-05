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
    int n,k,i;
    cin>>n>>k;
    string s;
    cin>>s;
    int f[26];
    for(i=0; i<k; i++) {
        f[i]=0;
    }
    for(i=0; i<n; i++) {
        int l=s[i]-'A';
        if(l<k)
            f[l]++;
    }
    int ans = n;
    for(i=0; i<k; i++) {
        ans=min(ans,f[i]);
    }
    cout<<ans*k<<endl;
    return 0;
}
