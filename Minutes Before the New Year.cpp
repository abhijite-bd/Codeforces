#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int n,sum=0,a,b,i;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a>>b;
        if(b>0) {
            sum+=60-b;
            a++;
        }
        sum+=(24-a)*60;
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
