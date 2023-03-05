#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    ll n,i,c,m=0,p=1,d;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=1; i<n; i++) {
        if(a[i]>a[i-1])
            p++;
        else {
            m=max(m,p);
            p=1;
        }
    }
    cout<<max(m,p);
    return 0;
}
