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
    int t,i,n,b1,b2,c1,c2,b,c;
    cin>>t;
    while(t--) {
        string s;
        b1=0,b2=0,c1=0,c2=0;;
        cin>>s;
        n=s.size();
        for(i=0; i<n; i++) {
            if(s[i]=='(')
                b1++;
            else if(s[i]==')' and b1>b2)
                b2++;
            if(s[i]=='[')
                c1++;
            else if(s[i]==']' and c1>c2)
                c2++;
        }
        cout<<min(b1,b2)+min(c1,c2)<<endl;
    }
    return 0;
}
