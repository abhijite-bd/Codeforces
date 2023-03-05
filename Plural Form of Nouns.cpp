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
    int t,n,i,j;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        n=s.size();

        if(s[n-1]=='x' or s[n-1]=='s' or s[n-1]=='o' or (s[n-1]=='h' and s[n-2]=='c' and n>1) ) {
            cout<<s<<"es"<<endl;
        } else if(s[n-1]=='f' ) {
            string s2=s.substr(0,n-1);
            cout<<s2<<"ves"<<endl;
        } else if(s[n-1]=='e' and s[n-2]=='f' and n>1) {
            string s2=s.substr(0,n-2);
            cout<<s2<<"ves"<<endl;
        } else if(s[n-1]=='y') {
            string s2=s.substr(0,n-1);
            cout<<s2<<"ies"<<endl;
        } else
            cout<<s<<'s'<<endl;
    }
    return 0;
}
