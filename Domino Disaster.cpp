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
    cin>>t;
    while(t--) {
        cin>>n;
        string s;
        cin>>s;
        for(i=0; i<n; i++) {
            if(s[i]=='U')
                cout<<'D';
            else if(s[i]=='D')
                cout<<'U';
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
