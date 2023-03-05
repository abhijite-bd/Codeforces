#include<iostream>
#include<math.h>
using namespace std;
bool Prime(long long n)
{
    long long limit=sqrt(n);
    if(n<2)
        return false;
    else if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int j=3; j<=limit; j+=2)
    {
        if(n%j==0)
            return false;
    }
    return true;
}
int main()
{

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long num;
        cin>>num;
        long long sqr=sqrt(num);
        if(sqr*sqr==num && Prime(sqr)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
