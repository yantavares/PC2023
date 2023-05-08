
#include <bits/stdc++.h>

using namespace std;

string driver(long long x, long long y, long long res)
{
    for (long long i = 1; i <= res; i++)
    {
        if (log(res) / log(i))
        {
            return "YES";
        }
    }

    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    for (long long l = 0; l < n; l++)
    {
        long long x, y;
        long long res;

        cin >> x >> y;

        res = x - y;

        if (res < 2)
        {
            cout << "NO" << endl;
        }

        else if (res % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << driver(x, y, res) << endl;
        }
    }

    return 0;
}