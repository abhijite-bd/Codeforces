#include<bits/stdc++.h>

using namespace std;



int main()

{

    int test;

    cin >> test;

    while (test--)

    {

        int n;

        cin >> n;

        int a[n];

        int mn = INT_MAX;

        for (int i = 0; i < n; i++)

        {

            cin >> a[i];

            if (mn > a[i])

                mn = a[i];

        }

        int ans = 0;

        int temp = 0;

        for (int i = 0; i < n; i++)

        {

            if (a[i] != mn)

            {

                if (a[i] % mn == 0)

                {

                    ans++;

                }

                else

                {

                    temp = 1;

                    break;

                }

            }

        }

        if (temp)

            cout << n << endl;

        else

            cout << ans << endl;

    }

}