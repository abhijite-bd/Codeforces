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
#define   max(a,b,c) max(max(a,b),b)
#define   min(a,b,c) min(min(a,b),c)

using namespace std;
int main()
{
    fast();
    string s1,s2,s3;
    int t,i,j,n,l,s=0;
    cin>>t;
    while(t--) {
        cin>>s1>>s2>>s3;
        s=0;
        l=s1.size();
        for(i=0; i<l; i++) {
            swap(s1[i],s3[i]);
            if(s1[i]==s2[i])
                s++;
            else {
                swap(s1[i],s3[i]);
                swap(s2[i],s3[i]);
                if(s1[i]==s2[i])
                    s++;
            }
        }
        s==l?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
