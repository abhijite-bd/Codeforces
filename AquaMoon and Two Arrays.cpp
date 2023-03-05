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
    int t,n,i,j,s1,s2;
    vector<pair<int,int>>ans;

    cin>>t;
    while(t--) {
        cin>>n;
        int a[n],b[n];
        int c[n],d[n];
        s1=0;
        s2=0;

        for(i=0; i<n; i++) {
            cin>>a[i];
            s1+=a[i];
        }

        for(i=0; i<n; i++) {
            cin>>b[i];
            s2+=b[i];
        }

        if(s1!=s2)
            cout<<-1<<endl;
        else {
            int x=0,y=0;

            for(i=0; i<n; i++) {
                if(a[i]<b[i]) {
                    int l=b[i]-a[i];
                    for(j=0; j<l; j++) {
                        c[x]=i+1;
                        x++;
                    }
                }
                if(a[i]>b[i]) {
                    int l=a[i]-b[i];
                    for(j=0; j<l; j++) {
                        d[y]=i+1;
                        y++;
                    }
                }
            }
            cout<<(x+y)/2<<endl;
            for(j=0; j<(x+y)/2; j++) {
                cout<<d[j]<<ss<<c[j]<<endl;
            }
        }
    }
    return 0;
}

