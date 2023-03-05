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
    int n,i,j;
    int a[100];
    i=0;
    int total=0;
    while(cin>>a[i] and a[i]!=-1) {
        total+=a[i];
        i++;
    }
    n=i;
    cout<<total<<endl;
    double mean=total/(float)n;
//    cout<<"Mean : "<<mean<<endl;
    double ans=0;
    for(i=0; i<n; i++) {
        double d=(mean-a[i]);
        ans+= d*d;
    }
    ans/=8;
    double sd=sqrt(ans);
    printf("%-8s %.6lf\n","Mean : ",mean);
    printf("%-8s %.6lf\n","SD   : ",sd);
//    cout<<"SD : "<<sd<<endl;
    return 0;
}
//65 9 27 78 12 20 33 49 -1
