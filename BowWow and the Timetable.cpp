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
    cin>>s;
    int l=s.size(),i=0,a,f=0;
    int t=l%2;
    for(i=1; i<l; i++) {
        if(s[i]=='1') {
            f=1;
            break;
        }
    }
    if(f and t)
        cout<<l/2+1;
    else
        cout<<l/2;
return 0;
}
