#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, big = -1, count = 0;

    cin >> n;

    vector<int> ns;

    for (size_t i = 0; i < n; i++)
    {
        cin >> k;
        if (big < k)
        {
            big = k;
        }
        ns.push_back(k);
    }
    for (size_t i = 0; i < n; i++)
    {
        if (ns[i] < big)
        {
            count += big - ns[i];
        }
    }

    cout << count << endl;

    return 0;
}