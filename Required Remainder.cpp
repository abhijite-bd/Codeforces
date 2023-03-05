#include<iostream>
using namespace std;
void work(long int a,long int b,long int m)
{
    long int r=m%a;
    if(r==b)
        cout<<m<<endl;
    else if(r<b)
    {
        cout<<(m-r-a+b)<<endl;
    }
    else
        cout<<(m-r+b)<<endl;
}
int main()
{
    long int a,b,m,r,d;
    int n,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b>>m;
        work(a,b,m);
    }
    return 0;
}
