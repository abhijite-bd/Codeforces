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
    int t,n,i,j,n1,n2;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        n=s.size();
        if(n%2==0) {
            string s1=s.substr(0,n/2);
            string s2=s.substr(n/2,n-n/2);
//            cout<<s1<<ss<<s2<<endl;
            if(s1==s2)
                cout<<"YES"<<endl;
            else
                cout<<"NO\n";
        } else
            cout<<"NO\n";
    }
    return 0;
}
