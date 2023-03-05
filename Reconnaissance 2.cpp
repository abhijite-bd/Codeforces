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
    int n,a[101],b[101];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m = 1001, d = 0;
    d = abs(a[0] - a[n-1]);
    m = min(m,d);
    int idx1 = 1,idx2 = n;
    for(int i=0; i<n; i++){
        d = abs(a[i] - a[i+1]);
        if(m > d){
            m = d;
            idx1 = i+1;
            idx2 = i+2;
        }
    }
    cout<<idx1<<" "<<idx2<<endl;
    return 0;
}
