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
    int n,m,i,j,k,ans=0,mx=-1;
    string s;
    cin>>n>>m;
    for(i=0; i<m; i++) {
        cin>>s;
        k=0;
        for(j=0; j<n; j++) {
            if(s[j]=='1')
                k++;
        }
        if(k!=n)
            ans++;
        else
            ans=0;
        if(mx<ans)
            mx=ans;
    }
    cout<<mx<<endl;
    return 0;
}
