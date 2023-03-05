#include<iostream>
using namespace std;
int main()
{
    long long int n,d,r;
    cin>>n;
    d=n/2;
    if(r=n%2==0)
        cout<<d<<endl;
    else
        cout<<"-"<<d+1<<endl;
    return 0;
}
