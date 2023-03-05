#include<iostream>
using namespace std;
int main()
{
   long long int m,n,a,s1,s2;
    cin>>n>>m>>a;

        if(m%a==0)
            s1=m/a;
        else
            s1=m/a+1;
        if(n%a==0)
            s2=n/a;
        else
            s2=n/a+1;
        cout<<s1*s2<<endl;

    return 0;
}
