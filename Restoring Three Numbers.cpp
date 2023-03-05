#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int num[4];
    cin>>num[0]>>num[1]>>num[2]>>num[3];
    sort(num,num+4);

    cout<<num[3]-num[0]<<" "<<num[3]-num[1]<<" "<<num[3]-num[2]<<endl;
    return 0;
}
