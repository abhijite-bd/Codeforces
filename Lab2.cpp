#include <bits/stdc++.h>
#define ss " "
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i + j == n + 1)
                cout << " 0  ";
            else if (i + j < n+1)
                cout << "+1  ";
            else
                cout << "-1  ";
        }
        cout << endl;
    }
    return 0;
}