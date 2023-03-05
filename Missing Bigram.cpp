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
    int t,n,i,j;
    cin>>t;
    while(t--) {
    multiset<string>st;
        string s,ans="\0";
        cin>>n;
        j=2;
        char curr,rec;
        for(i=0; i<n-2; i++) {

            cin>>s;
            st.insert(s);
        }
        auto it=st.begin();
//        for(auto e:st)
//        {
//            cout<<e<<endl;
//        }
//        cout<<endl;
        while(it!=st.end()) {
            s=*it;
            rec=s[0];
            if(i==0)
                curr=ans[1];
            else if(curr==rec and j!=0) {
                j--;
                ans+=s[1];
            } else
                ans+=s;
            curr=ans[ans.size()-1];
            it++;
        }

    if(ans.size()<n) {
        for(i=0; i<n-ans.size(); i++) {
            cout<<'a';
        }
    }
        cout<<ans<<endl;

    }
    return 0;
}
