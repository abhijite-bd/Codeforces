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
    int n,m,x,y,i,j,a,b;
    set<int> s;
    cin>>n>>m;
    for(i=0; i<n; i++) {
        cin>>x;
        for(j=0; j<x; j++) {
            cin>>a;
            s.insert(a);
        }
    }
//    for(auto e:s)
//        cout<<e<<ss;
//    cout<<endl;
    if(s.size()==m)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
