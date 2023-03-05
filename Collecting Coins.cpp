#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int func(long int a[],long int d)
{
    int flag;
    long int s1=a[2]-a[0];
    long int s2=a[2]-a[1];
    long int s3=d-s1-s2;
    if(s3>=0 && s3%3==0)
        return flag=1;
    else
        return flag=0;
}
int main()
{
    long int a[3],n,i,d;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a[0]>>a[1]>>a[2]>>d;
        sort(a,a+3);
        int f=func(a,d);
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
