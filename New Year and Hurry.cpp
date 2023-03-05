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
    int n,m,s,i=1,c=0;
    cin>>n>>m;
    s=240-m;
    while(s>0) {
        s-=i*5;
        if(s<0 or c==n)
            break;
        i++;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
