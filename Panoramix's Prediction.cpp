#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int prime(int a)
{
    int i,f=0;
    for(i=2; i<a; i++) {
        if(a%i==0) {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a,n,i,f;
    cin>>a>>n;
    for(i=a+1; i<=n; i++) {
        if(i%2!=0) {
            f=prime(i);
            if(f==0) {
                if(i==n) {
                    cout<<"YES\n";
                    return 0;
                } else {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
