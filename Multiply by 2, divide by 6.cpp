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
    int i,n,t;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int c=0;
        while(n%6==0) {
            c++;
            n/=6;
        }
        while(n%3==0) {
            c+=2;
            n/=3;
        }
        if(n==1)
            cout<<c<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
