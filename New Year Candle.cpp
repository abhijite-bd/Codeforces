#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    sum=a;
    while(1)
    {
        sum+=a/b;
        a=(a/b)+a%b;
        if(a<b)
            break;
    }
    cout<<sum<<endl;
    return 0;
}
