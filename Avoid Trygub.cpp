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
    string s;
    int t,i,d,p,n;
    cin>>t;
    while(t--) {
        cin>>n;
        cin>>s;
        p=0;
        for(i=0; i<n; i++) {
            if(s[i]=='t')
                p++;
        }
        for(i=0; i<n; i++) {
            if(s[i]!='t')
                cout<<s[i];
        }
        for(i=0; i<p; i++) {
            cout<<'t';
        }
        cout<<endl;
    }
    return 0;
}
