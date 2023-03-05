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
    ll t,i,n,p,j,k;
    cin>>t;
    while(t--) {
        ll even=0,odd=0,flag=0,q;
        p=0;
        q=0;
        cin>>n;
        ll a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }

        if(n%2==0) {
            if(even != n/2)
                cout<<-1<<endl;
            else
                flag=1;
        } else {
            if(abs(odd-even)==1)
                flag=1;
            else
                cout<<-1<<endl;
        }

//        if(flag) {
//            for(i=0; i<n-1; i++) {
//                if(a[i]%2==0) {
//                    j=i+1;
//                    k=1;
//                    while(a[j]%2!=1) {
//                        swap(a[j],a[j+k]);
//                        k++;
//                        p++;
//                    }
//                } else {
//                    j=i+1;
//                    k=1;
//                    while(a[j]%2!=0) {
//                        swap(a[j],a[j+k]);
//                        k++;
//                        p++;
//                    }
//                }
//            }
        if(flag) {


            if(odd==even) {

                    j=0;
                    for(i=0; i<n; i++) {
                        if(a[i]%2==0) {
                            p+=abs(i-j);
//                        cout<<i<<ss<<j<<ss<<p<<endl;
                            j+=2;
                        }
                    }

                    j=0;
                    for(i=0; i<n; i++) {
                        if(a[i]%2==1) {
                            q+=abs(i-j);
//                        cout<<i<<ss<<j<<ss<<p<<endl;
                            j+=2;
                        }
                    }

                cout<<min(p,q)<<endl;
            }
            if(odd>even) {
                j=0;
                for(i=0; i<n; i++) {
                    if(a[i]%2==1) {
                        p+=abs(i-j);
//                        cout<<i<<ss<<j<<ss<<p<<endl;
                        j+=2;
                    }
                }
                cout<<p<<endl;
            }
            if(even>odd) {
                j=0;
                for(i=0; i<n; i++) {
                    if(a[i]%2==0) {
                        p+=abs(i-j);
//                        cout<<i<<ss<<j<<ss<<p<<endl;
                        j+=2;
                    }
                }
                cout<<p<<endl;
            }
        }
    }
//}
    return 0;
}
