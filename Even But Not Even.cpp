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
    ll t,n,i,j;
    cin>>t;
    while(t--) {
        cin>>n;
        string s,s2;
        cin>>s;
        for(i=0; i<n; i++) {
            if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
                s2+=s[i];
            if(s2.size()==2)
                break;
        }
        if(s2.size()==2)
            cout<<s2<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
