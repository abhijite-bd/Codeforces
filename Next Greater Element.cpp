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
vector<int>NGE(vector<int>v)
{
    int i;
    vector<int>nge(v.size());
    stack<int>st;
    for(i=0; i<v.size(); i++) {
        while(!st.empty() and v[i]>v[st.top()])
            nge[st.top()]=i;
        st.push(i);
    }
    while(!st.empty()) {
        nge[st.top()]=-1;
    }
}
int main()
{
    int n,i;
    cin>>n;
    vector<int >v(n);
    for(i=0; i<n; i++) {
        cin>>v[i];
    }
    vector<int>nge=NGE(v);
    for(i=0; i<n; i++) {
        cout<<v[i]<<ss<<v[nge[i]]<<endl;
    }
    return 0;
}
