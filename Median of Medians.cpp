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
    int t;

    t=3;
    int a[3];
    vector<int>b;
    while(t--) {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        b.pb(a[1]);
    }
    sort(b.begin(),b.end());
    cout<<b[1]<<endl;
    return 0;
}
