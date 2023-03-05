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
    int n,p=0,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0; i<n; i++) {
        if(s[i]=='a') {
            i++;
            if(s[i]!='b') {
                s[i]='b';
                p++;
            }
        } else {
            i++;
            if(s[i]!='a') {
                s[i]='a';
                p++;
            }
        }
    }
    cout<<p<<endl;
    cout<<s<<endl;
    return 0;
}
