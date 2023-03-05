#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int sum(int d)
{
    int su=0;
    for(int j=1; j<=d; j++) {
        su+=j;
    }
    return su;
}
int main()
{
    int i,k,s=0;
    cin>>k;
    for(i=1;; i++) {
        s+=sum(i);
        if(s==k) {
            cout<<i<<endl;
            break;
        } else if(s>k) {
            cout<<i-1<<endl;
            break;
        }
    }
    return 0;
}
