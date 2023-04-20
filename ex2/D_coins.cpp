#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t, k, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;

        if (n % 2 == 0 || k % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}