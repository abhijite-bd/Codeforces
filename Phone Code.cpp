#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    int n,i,ans=0,j;
    cin>>n;
    string s[n];
    for(i=0; i<n; i++) {
        cin>> s[i];
    }
    int l=s[0].size();
    for(i=0; i<l; i++) {
        for(j=0; j<n; j++) {
            if(s[j][i]!=s[0][i]) {
                cout<<ans<<endl;
                return 0;
            }
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
