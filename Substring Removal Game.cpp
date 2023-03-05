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
    fast();
    int t,n,i,j,c;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        n=s.size();
        int a[n];
        c=0;
        j=0;
        int sum=0;
        for(i=0; i<n; i++) {
            if(s[i]=='1')
                c++;
            if(s[i]!='1' and c>0) {
                a[j]=c;
                j++;
                c=0;
            }
        }
        if(s[n-1]=='1') {
            a[j]=c;
            j++;
        }
        sort(a,a+j,greater<int>());
        for(i=0; i<j; i++) {
            if(i%2==0)
                sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
