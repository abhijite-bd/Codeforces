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
    int t,i,n,ans=0,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++) {
        if(s[i]=='4' or s[i]=='7')
            sum+=(s[i]-'0');
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(i=0; i<n/2; i++) {
        ans+=(s[i]-'0');
    }
//    cout<<ans<<endl;
    if(ans*2==sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
