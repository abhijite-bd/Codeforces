#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    long int a;
    cin>>a;
    if(a>=0)
        cout<<a<<endl;
    else {
        long int b=a*-1;
        int p1=b%10;
        b=b/10;
        int p2=b%10;
        if(p1>=p2)
            cout<<(a+p1)/10;
        else {
            if(a*(-1)<100)
                cout<<-p1<<endl;
            else {
                if(((a+10*p2)/100)==0) {
                    cout<<0<<endl;
                } else
                    cout<<(a+10*p2)/100<<p1<<endl;
            }
        }
    }
    return 0;
}
