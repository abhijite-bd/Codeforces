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
    int n,i,ans=0,len=0;
    cin>>n;
    string s;
    cin>>s;
    int a[n];
    for(i=0; i<n; i++) {
        if(s[i]=='B') {
            ans++;
            a[ans-1]=len;
            for(i=i; i<n; i++) {
                if(s[i]=='B') {
                    a[ans-1]++;
//                    len++;
                } else {
//                    a[ans-1]=len;
                    len=0;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    for(i=0; i<ans; i++) {
        cout<<a[i]<<ss;
    }
    return 0;
}
