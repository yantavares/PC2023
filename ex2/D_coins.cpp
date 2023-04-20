#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long count, k;
    long long n;

    cin >> count;

    for (size_t i = 0; i < count; i++)
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