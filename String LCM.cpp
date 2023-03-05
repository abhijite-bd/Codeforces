#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    string s1,s2;
    int i,j,n,t;
    cin>>t;
    while(t--) {
        cin>>s1>>s2;
        int f=0;
        int d1=s1.size();
        int d2=s2.size();
        int n=lcm(d1,d2);
        for(i=0; i<n; i++) {
            if(s1[i%d1]!=s2[i%d2]) {
                f=1;
                break;
            }
        }
        if(f)
            cout<<-1<<endl;
        else {
            for(i=0; i<n; i++) {
                cout<<s1[i%d1];
            }
        }
        cout<<endl;
    }
    return 0;
}
