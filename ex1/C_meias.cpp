#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(2);
    int n, k, count = 0;
    cin >> n >> k;

    for (size_t i = 1; i <= n; i++)
    {

        if (i % k == 0)
        {
            n++;
        }
        count++;
    }
    cout << count << endl;
}