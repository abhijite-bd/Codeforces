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
    int s=0,a[4],i,j;
    for(i=0; i<4; i++) {
        cin>>a[i];
        s+=a[i];
    }
    for(i=0; i<4; i++) {
        for(j=i+1; j<4; j++) {
            if(a[i]+a[j]==s-a[i]-a[j]) {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    sort(a,a+4);
    if(a[3]==s-a[3]) {
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}
