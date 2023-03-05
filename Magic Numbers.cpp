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
    string s;
    int i,f=1;
    cin>>s;
    for(i=0; i<s.size(); i++) {
        if(s[i]=='1') {
            i++;
            if(s[i]=='4') {
                i++;
                if(s[i]=='4')
                    continue;
                else
                    --i;
            } else {
                --i;
            }
        } else
            f=0;
    }
    f==0?cout<<"NO\n":cout<<"YES\n";
    return 0;
}
