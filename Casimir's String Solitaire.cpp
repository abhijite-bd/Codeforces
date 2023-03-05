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
    int t,a,b,c,i,j,d,e;
    string s;
    cin>>t;
    while(t--) {
        cin>>s;
        a=0,b=0,c=0;
        for(i=0; i<s.size(); i++) {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else
                c++;
        }
         if(b==a+c)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
