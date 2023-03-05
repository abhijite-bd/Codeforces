#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
int b[3];
int pairr(int a[])
{
    int f;
    if(((a[0]==a[1]) and (a[1]==a[2])) or ((a[1]==a[2]) and a[0]<a[1])) {
        b[0]=a[2];
        b[1]=a[0];
        if(a[0]==1)
            b[2]=1;
        else if((a[0]==a[1]) and (a[1]==a[2]))
            b[2]=a[1];
        else
            b[2]=a[0]-1;
        return 1;
    } else
        return 0;
}
using namespace std;
int main()
{
    int a[3];
    int n,i,j;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        int flag=pairr(a);
        if(flag==0)
            cout<<"NO"<<endl;
        else {
            cout<<"Yes\n";
            cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
        }
        flag=0;
    }
    return 0;
}
