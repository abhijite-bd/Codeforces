#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int i,n,j,t,k,f;
    string s;
    cin>>t;
    while(t--) {
        cin>>n;
        cin>>s;
        k=0;
        while(1) {
            f=0;
            for(i=0; i<n-1; i++) {
                if(s[i]=='A' and s[i+1]=='P') {
                    s[i+1]='A';
                    f++;
                    i++;
                }
            }
            if(f!=0)
                k++;
            else {
                cout<<k<<endl;
                break;
            }
            f=0;
        }
    }
    return 0;
}
