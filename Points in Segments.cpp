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
    int n,m,i,l,r;
    cin>>n>>m;
    set<int>s;
    for(i=1; i<=m; i++) {
        s.insert(i);
    }
    while(n--) {
        cin>>l>>r;
        for(i=l; i<=r; i++) {
            s.erase(i);
        }
    }
    cout<<s.size()<<endl;
    for(auto e:s)
        cout<<e<<ss;
    return 0;
}
