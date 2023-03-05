#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string>
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
    int i,j,n,m,t;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        multiset<int >s;
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                int diff=max(i,n-1-i)+max(j,m-j-1);
                s.insert(diff);
            }
        }
        for(auto e:s)
            cout<<e<<ss;
        cout<<endl;
    }
    return 0;
}
