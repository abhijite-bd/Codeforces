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
    string s;
    int t,n,i,j,total,k;
    cin>>t;
    while(t--) {
        total=5;
        cin>>s;
        n=s.size();
        char c=s[0];
        j=1;
        k=1;
        for(i=1; i<n; i++) {
            if(s[i]==c) {
                if(j>k)
                    total++;
                else {
                    j++;
                    total+=5;
                }
            } else {
                if(c=='W') {
                    if(s[i]=='E') {
                        k++;
                        total++;
                    } else {
                        k=1;
                        total+=5;
                    }
                } else if(c=='E') {
                    if(s[i]=='W') {
                        k++;
                        total++;
                    } else {
                        k=1;
                          total+=5;
                    }
                } else if(c=='N') {
                    if(s[i]=='S') {
                        k++;
                        total++;
                    } else {
                        k=1;
                        total+=5;
                    }
                } else if(c=='S') {
                    if(s[i]=='N') {
                        k++;
                        total++;
                    } else {
                        k=1;
                        total+=5;
                    }
                }
                c=s[i];
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
