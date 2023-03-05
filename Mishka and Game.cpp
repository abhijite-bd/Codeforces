#include<iostream>
using namespace std;
int main()
{
    int a,b,m=0,c=0,n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
            m++;
        else if(b>a)
            c++;
    }
    if(m==c)
        cout<<"Friendship is magic!^^"<<endl;
    else if(m>c)
        cout<<"Mishka\n";
    else
        cout<<"Chris\n";
    return 0;
}
