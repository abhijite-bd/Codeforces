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
    string s1[6]= {"purple","green","blue","orange","red","yellow"};
    string s2[6]= {"Power","Time","Space","Soul","Reality","Mind"};
    int n,i,j,ans;
    cin>>n;
    string s[n];
    for(i=0; i<n; i++) {
        cin>>s[i];
    }
    cout<<6-n<<endl;
    for(i=0; i<6; i++) {
        ans=0;
        for(j=0; j<n; j++) {
            if(s1[i]==s[j])
                ans=1;
        }
        if(ans==0)
            cout<<s2[i]<<endl;
    }

    return 0;
}
