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
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ss " "
using namespace std;
int main()
{
    fastread();
    int i,t,j,n,k;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[n];
        k=0;
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        set<ll>s;
        sort(a,a+n);
        s.insert(a[0]);
        for(j=1; j<n; j++) {
            if(a[j-1]>=a[j])
                a[j]+=1;
            s.insert(a[j]);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
