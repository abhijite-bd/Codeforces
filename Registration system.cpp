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
    int i,n,j;
    map<string,int> mp;
    string s;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>s;

        if(mp[s]==0) {
            cout<<"OK"<<endl;
            mp[s]=1;
        } else {
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
    return 0;
}
