#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int i,j,r,c,row[11]= {0},col[11]= {0};
    string s;
    cin>>r>>c;
    for(i=0; i<r; i++) {
        cin>>s;
        for(j=0; j<c; j++) {
            if(s[j]=='S') {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    int ck=0;
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            if(row[i]==0 || col[j]==0)
                ck++;
        }
    }
    cout<<ck<<endl;
    return 0;
}
