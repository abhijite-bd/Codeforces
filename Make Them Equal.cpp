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
    int t,n,i;
    char c;
    cin>>t;
    while(t--) {
        cin>>n>>c;
        int f=0;
        string s;
        cin>>s;
        for(i=0; i<n; i++) {
            if(s[i]!=c)
                f=1;
        }
        if(f==1) {
            if(s[n-1]==c) {
                cout<<1<<endl;
                cout<<n<<endl;
            } else {
                if(s[n-2]==c) {
                    cout<<1<<endl;
                    cout<<n-1<<endl;
                } else {
                    cout<<2<<endl;
                    cout<<n<<ss<<n-1<<endl;
                }
            }
        } else
            cout<<0<<endl;
    }
    return 0;
}
