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
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int i,n=s.size(),ans=300;
        for(i=0; i<n; i++) {
            int c=s[i];
            if(c<ans)
                ans=c;
        }
        cout<<(char)ans<<ss;
        int f=0;
        for(i=0; i<n; i++) {
            if(s[i]==(char)ans and f==0) {
                f=1;
            } else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
