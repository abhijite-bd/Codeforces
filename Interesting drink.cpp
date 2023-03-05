#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long int d,n,a,j,i,c=0,s;
    cin>>d;
    long int p[d];
    for(i=0; i<d; i++)
    {
        cin>>p[i];
    }
    sort(p,p+d);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        s=upper_bound(p,p+d,a)-p;
        cout<<s<<endl;
    }
    return 0;
}
