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
    long int a,r,c=0;
    cin>>a;
    c=a/100;
    r=a%100;
    if(r!=0) {
        c+=r/20;
        r=r%20;
        if(r!=0) {
            c+=r/10;
            r=r%10;
            if(r!=0) {
                c+=r/5;
                r=r%5;
                c+=r;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}
