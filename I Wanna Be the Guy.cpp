#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,i,m,p,q,flag;
    cin>>n>>p;
    int a[n],b[n];
    for(i=0; i<p; i++) {
        cin>>a[i];
        m=a[i];
        b[m]=1;
    }
    cin>>q;
    int c[q];
    for(i=0; i<q; i++) {
        cin>>c[i];
        m=c[i];
        b[m]=1;
    }
    for(i=1; i<=n; i++) {
        if(b[i]==1){
            flag=1;
        }
        else {
            flag=0;
            break;
        }
    }
    if( flag==1)
        cout<< "I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!" <<endl;
    return 0;
}
