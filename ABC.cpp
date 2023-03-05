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
    int t,i,f,n;
    cin>>t;
    while(t--) {
        string s;
        cin>>n;
        cin>>s;
        if(n==1)
            cout<<"YES"<<endl;
        else if(n==2) {
            if(s=="00" or s=="11")
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
