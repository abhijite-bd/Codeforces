#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n<=5)
        cout<<1<<endl;
    else
    {
        int d=n/5;
        int r=n%5;
        if(r>0)
            cout<<d+1<<endl;
        else
            cout<<d<<endl;
    }
    return 0;
}
