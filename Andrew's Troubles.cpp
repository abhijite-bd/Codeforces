#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b) {
        if(b<=a)
            cout<<0<<endl;
        else if(b<a+300)
            cout<<1<<endl;
        else if(b<a+900)
            cout<<2<<endl;
        else if(b<a+1800)
            cout<<3<<endl;
        else
            cout<<4<<endl;
    }
    return 0;
}
