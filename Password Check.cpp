#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
    cin>>s;
    int n,i,j,c=0,sm=0,d=0,ch;
    n=s.size();
    if(n<5)
        cout<<"Too weak"<<endl;
    else {
        for(i=0; i<n; i++) {
            if(s[i]>='A' and s[i]<='Z')
                c=1;
            if(s[i]>='a' and s[i]<='z')
                sm=1;
            if(isdigit(s[i]))
                d=1;
        }
        if(c==1 and d==1 and sm==1)
            cout<<"Correct"<<endl;
        else
            cout<<"Too weak"<<endl;
    }
    return 0;
}
