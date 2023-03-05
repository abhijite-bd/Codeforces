#include<iostream>
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
    string s,s2="";
    int n,i,j=0,f=0;
    ll n2;
    cin>>s;
    n=s.size();
    for(i=0; i<n; i++) {
        if(s[i]=='.') {
            j=i-1;
            if(s[i-1]=='9') {
                cout<<"GOTO Vasilisa."<<endl;
                return 0;
            }
            cout<<endl;
            cout<<s[i+1]-'\0';
            cout<<endl;
            cout<<s[i+1];
            cout<<endl;
            if(s[i+1]>=5)
                s[i-1]=(s[i-1]++);
            break;
        }
    }
    for(i=0; i<=j; i++) {
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
