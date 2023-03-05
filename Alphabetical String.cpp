#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<deque>
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
    string s="abcdefghijklmnopqrstuvwxyz";
    string s2;
    int i,j,k,t,l;
    cin>>t;
    while(t--) {
        cin>>s2;
        deque <int> alpha;
        l=s2.size();
        int ch=96+l;
        for(i=0; i<l; i++) {
            alpha.push_back(s2[i]);
        }

//        cout<<endl;
        for(i=ch; i>=97; i--) {
            if(alpha.front()==i) {
                alpha.pop_front();
            } else if(alpha.back()==i) {
                alpha.pop_back();
            } else {
                break;
            }

        }
//        for(auto e:alpha)
//            cout<<e<<ss;
        if(alpha.size()==0)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
