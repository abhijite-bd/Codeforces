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
    int a[6],s=0,m=0;
    for(int i=0; i<6; i++) {
        cin>>a[i];
        if(a[i]>m)
            m=a[i];
        s+=a[i];
    }
    if(s%2!=0)
        cout<<"NO\n";
    else {
        if(m>s-m)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
