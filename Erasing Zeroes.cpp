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
    int t,i,n,j,k;
    string s;
    cin>>t;
    while(t--) {
        cin>>s;
        n=s.size();
        int m=0;
        for(i=0; i<n; i++) {
            if(s[i]!='0')
                break;
        }
        for(j=n-1; j>=0; j--) {
            if(s[j]!='0')
                break;
        }
        for(k=i; k<=j; k++) {
            if(s[k]=='0')
                m++;
        }
        cout<<m<<endl;
    }
    return 0;
}
