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
//    fast();
    int t,n,c,i,f;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        n=s.size();
        c=0;
        for(i=0; i<n; i++) {
            if(s[i]=='a')
                c++;
        }
        if(n==c)
            cout<<"NO\n";
        else {
            cout<<"Yes"<<endl;
//            if(n%2==1) {
            string s1='a'+s;
            string s11=string(s1.rbegin(),s1.rend());
            if(s1==s11) {
                string s2=s+'a';
//                    string s22=string(s2.rbegin(),s2.rend());
                cout<<s2<<endl;
            } else
                cout<<s1<<endl;
        }
//            else {
//                int x=0;
//                int y=0;
//                string s1=s.substr(0,(n/2));
//                string s2=s.substr(n/2,n-1);
////                cout<<s1<<ss<<s2<<endl;
//                for(i=0; i<s1.size(); i++) {
//                    if(s1[i]=='a')
//                        x++;
//                }
//                for(i=0; i<s2.size(); i++) {
//                    if(s2[i]=='a')
//                        y++;
//                }
//
//                if(x>=y)
//                    cout<<'a'<<s<<endl;
//                else
//                    cout<<s<<'a'<<endl;
//            }
//        }
    }
    return 0;
}
