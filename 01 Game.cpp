#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int t,n,i,j,a0,a1;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        a0=0;
        a1=0;
        n=s.size();
        for(i=0; i<n; i++) {
            if(s[i]=='0')
                a0++;
            else
                a1++;
        }
        j=min(a0,a1);
        if(j%2==1)
            cout<<"DA\n";
        else
            cout<<"NET\n";
    }
    return 0;
}
