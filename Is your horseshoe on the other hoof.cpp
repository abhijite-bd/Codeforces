#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int color[4];
    int c=0,i;
    for(i=0; i<4; i++) {
        cin>>color[i];
    }
    sort(color,color+4);
    for(i=0; i<4-1; i++) {
        if(color[i]-color[i+1]==0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
