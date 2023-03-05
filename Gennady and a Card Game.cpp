#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    char a[3];
    char c[3];
    cin>>c;
    int i,flag=0;
    for(i=0; i<5; i++) {
        cin>>a;
        if(c[0]==a[0])
            flag=1;
        else if(c[1]==a[1])
            flag=1;
    }
    flag==0?cout<<"NO\n":cout<<"YES\n";
    return 0;
}
