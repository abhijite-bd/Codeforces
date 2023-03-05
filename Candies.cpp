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
    int n,a,i,d;

    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int a;
        cin>>a;
        for(int i=2; i<10e9; i++) {
            d = pow(2,i) - 1;
            if(a%d==0) {
                cout<<a/d<<endl;
                break;
            }
        }
    }
    return 0;
}
