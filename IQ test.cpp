#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int i,n,e=0,o=0,x,y;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]%2==0) {
            e++;
            x=i;
        } else {
            o++;
            y=i;
        }
    }
    1==e?cout<<x+1<<endl:cout<<y+1<<endl;
    return 0;
}
