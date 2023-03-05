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
    ll t,i,num1,num2,n,b,d;
    string a,c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c>>d;
        int n1=a.size()+b;
        int n2=c.size()+d;
        if(n1>n2)
            cout<<'>'<<endl;
        else if(n1<n2)
            cout<<'<'<<endl;
        else {
            n1=a.size();
            n2=c.size();
//            cout<<n1<<ss<<n2<<endl;
            if(n1<n2) {
                for(i=0; i<n2-n1; i++) {
                    a+='0';
                }
//                cout<<a<<endl;
            } else if(n1>n2) {
                for(i=0; i<n1-n2; i++) {
                    c+='0';
                }
//                cout<<c<<endl;
            }
            num1=stoll(a);
            num2=stoll(c);
//            cout<<num1<<ss<<num2<<endl;
            if(num1>num2)
                cout<<'>'<<endl;
            else if(num1<num2)
                cout<<'<'<<endl;
            else
                cout<<'='<<endl;
        }
    }
    return 0;
}
