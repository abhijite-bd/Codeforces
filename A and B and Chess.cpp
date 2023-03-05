#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    string s;
    int t=8,n=8,i,j,white=0,black=0;
    while(t--) {
        cin>>s;
        for(i=0; i<n; i++) {
            if(s[i]=='.' )
                continue;
            else {
                if(s[i]=='Q')
                    white+=9;
                else if(s[i]=='R')
                    white+=5;
                else if(s[i]=='B')
                    white+=3;
                else if(s[i]=='N')
                    white+=3;
                else if(s[i]=='P')
                    white+=1;
                else if(s[i]=='q')
                    black+=9;
                else if(s[i]=='r')
                    black+=5;
                else if(s[i]=='b')
                    black+=3;
                else if(s[i]=='n')
                    black+=3;
                else if(s[i]=='p')
                    black+=1;
            }
        }
    }
//    cout<<white<<ss<<black<<endl;
    if(white==black)
        cout<<"Draw"<<endl;
    else if(white>black)
        cout<<"White"<<endl;
    else
        cout<<"Black"<<endl;
    return 0;
}
