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
    int t,n,i,j,k;
    cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2;
        n=s1.size();
        int a=0,b=0,c=0;
        sort(s1.begin(),s1.end());
        for(i=0; i<n; i++) {
            if(s1[i]=='a')
                a=1;
            if(s1[i]=='b')
                b=1;
            if(s1[i]=='c')
                c=1;
        }

        if(s2=="abc" and a+b+c==3) {
            for(i=0; i<n; i++) {
                if(s1[i]=='a') {
                    cout<<s1[i];
                }
            }
            for(i=0; i<n; i++) {
                if(s1[i]=='c') {
                    cout<<s1[i];
                }
            }
            for(i=0; i<n; i++) {
                if(s1[i]=='b') {
                    cout<<s1[i];
                }
            }
            for(i=0; i<n; i++) {
                if(s1[i]=='a' or s1[i]=='b' or s1[i]=='c')
                    continue;
                else
                    cout<<s1[i];
            }
            cout<<endl;
        } else {
            cout<<s1<<endl;
        }
    }
    return 0;
}
