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
    int n,i,j,fs=0,sf=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++) {
        if(s[i]=='F' and s[i+1]=='S')
            fs++;
        else if (s[i]=='S' and s[i+1]=='F')
            sf++;
    }
    if(sf>fs)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
