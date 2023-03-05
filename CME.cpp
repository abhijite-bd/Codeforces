//#include<iostream>
//#include<math.h>
//#include<algorithm>
//#include<cstring>
//#include<array>
//#include<vector>
//#include<queue>
//#define ll long long int
//#define   gcd(a,b)   __gcd(a,b)
//#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define ss " "
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//        if (n == 2)
//            cout << "2\n";
//        else if (n & 1) {
//            cout << "1\n";
//        } else
//            cout << "0\n";
//    }
//    return 0;
//}
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
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n == 2)
            cout << "2\n";
        else if (n%2!=0) {
            cout << "1\n";
        } else
            cout << "0\n";
    }
    return 0;
}
//n%2!=0
//n & 1 same
