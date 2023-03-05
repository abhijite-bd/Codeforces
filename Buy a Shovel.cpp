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
    int k,r,c,i;
    cin>>k>>r;
    for(i=1; i<10; i++) {
        c=k*i;
        if(c%10==0 or c%10==r)
            break;
    }
    cout<<i<<endl;
    return 0;
}
