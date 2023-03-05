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
    int t,n,i,j,h,c,b,p,f,sum;
    cin>>t;
    while(t--) {
        cin>>b>>p>>f>>h>>c;
        sum=0;
        while(b>=2) {
            if(p>0 and f>0) {
                if(h>=c) {
                    sum+=h;
                    b-=2;
                    p--;
                } else {
                    sum+=c;
                    b-=2;
                    f--;
                }
            } else {
                sum+=h*(min(b/2,p))+c*(min(b/2,f));
                break;
            }
        }
        cout<<sum<<endl;
    }
return 0;
}
