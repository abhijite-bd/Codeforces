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
int main()
{
    int n,m,i,j,x,y;
    cin>>n>>m;
    vector<int>v(n);
    set<int>s;
    for(i=0; i<n; i++) {
        cin>>v[i];
    }
    for(i=n-1; i>=0; i--) {
        s.insert(v[i]);
        v[i]=s.size();
    }

    for(j=0; j<m; j++) {
        cin>>x;
        cout<<v[x-1]<<endl;
    }
    return 0;
}
