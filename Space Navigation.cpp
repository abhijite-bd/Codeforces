#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    string s;
    int a,b,c,d,e,f,i,t,j;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b;
        cin>>s;
        c=0;
        d=0;
        e=0;
        f=0;
        for(j=0; j<s.size(); j++) {
            if(s[j]=='U' and b>0)
                d++;
            else if(s[j]=='D' and b<0)
                d--;
            if(b==d) {
                e++;
                break;
            }

        }
        for(j=0; j<s.size(); j++) {
            if(s[j]=='R' and a>0)
                c++;
            else if(s[j]=='L' and a<0)
                c--;
            if(a==c) {
                f++;
                break;
            }
        }

        if(e==1 and f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
