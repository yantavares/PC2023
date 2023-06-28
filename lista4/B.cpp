#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    vector<long long> v(n, 0);

    vector<long long> delta(n, 0);

    for (int i = 0; i < q; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;

        delta[l - 1] += x;
        if (r < n)
        {
            delta[r] -= x;
        }
    }

    long long soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += delta[i];
        v[i] += soma;
    }

    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}
