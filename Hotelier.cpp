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
    int n,i,j,ans;
    cin>>n;
    string s;
    cin>>s;
    int a[10];
    for(i=0; i<10; i++)
        a[i]=0;

    for(i=0; i<n; i++) {
        if(s[i]=='L') {
            int c=0;

            for(j=0; j<10; j++) {

                if(a[j]==0)c++,a[j]=1;

                if(c==1) break;

            }
        } else if(s[i]=='R') {
            int c=0;

            for(j=9; j>=0; j--) {

                if(a[j]==0)c++,a[j]=1;

                if(c==1) break;
            }
        } else
            a[s[i]-'0']=0;
    }


    for(i=0; i<10; i++) {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
