#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define ss " "
using namespace std;
int main()
{
    int i,t,n,j;
    string s;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        cin>>s;
        int f=0;
        for(j=0; j<=4; j++) {
            string s1=s.substr(0,j);
            string s2=s.substr(n-4+j);
            string s3=s1+s2;
            if(s3=="2020") {
                f=1;
                cout<<"YES\n";
                break;
            }
        }
        if(f==0)
            cout<<"NO\n";
    }
    return 0;
}
