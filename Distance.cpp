#include<bits/stdc++.h>
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
    int t,x,y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        int total=x+y;
        if(total%2==1)
            cout<<-1<<ss<<-1<<endl;
        else{
            if(x>=y)
                cout<<total/2<<ss<<y<<endl;
            else
                cout<<x<<ss<<total/2<<endl;
        }

    }
    return 0;
}
