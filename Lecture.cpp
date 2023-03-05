#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
vector<pair<string,string>>v;
void print(string x)
{
    for(auto e:v) {
        if(x==e.first) {
            cout<<(e.first.size()<=e.second.size()?e.first:e.second)<<ss;
//            v.pop(*e);
            break;
        }
    }
}
int main()
{
    int n,m,i;
    string x,y;
    cin>>n>>m;
    for(i=0; i<m; i++) {
        cin>>x>>y;
        v.pb({x,y});
    }
    for(i=0; i<n; i++) {
        cin>>x;
        print(x);
    }
    cout<<endl;
    return 0;
}
