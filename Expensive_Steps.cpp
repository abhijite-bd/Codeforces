#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d,n;
	cin>>t;
	while(t--)
	{
	   cin>>n>>a>>b>>c>>d;
	   int ans1=abs(a-c)+abs(b-d);
	   a=min(a,n-a+1);
	   b=min(b,n-b+1);
	   c=min(c,n-c+1);
	   d=min(d,n-d+1);
    //    cout<<a<<b<<c<<d;
	   int ans2=min(a,b)+min(c,d);
	   cout<<min(ans1,ans2)<<endl;
	}
	return 0;
}
