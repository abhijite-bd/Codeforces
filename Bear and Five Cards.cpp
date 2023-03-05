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
    vector<int >v1,v2(101,0);
    int a,i,j,ans,total=0,mn=99999;
    for(i=0; i<5; i++) {
        cin>>a;
        v1.push_back(a);
        v2[a]++;
        total+=a;
    }
    mn=total;
    for(i=1; i<101; i++) {
        if(v2[i]>=3)
            mn=min(mn,total-3*i);
        else if(v2[i]==2)
            mn=min(mn,total-2*i);
    }
    cout<<mn<<endl;
    return 0;
}
