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
    int a[3],m[3],s=0,mi;
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
//    for(int i=0; i<3; i++) {
//        m[i]=abs(a[2]+a[1]+a[0]-a[i]*3);
//        if(m[i]==0) {
//            mi=a[i];
//            break;
//        }
//    }
//    for(int i=0; i<3; i++) {
//        a[i]>=mi?s+=a[i]-mi:s+=mi-a[i];
//    }
    s=a[2]-a[0];
    cout<<s;
    return 0;
}
