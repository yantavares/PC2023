#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long> aux(n + 1);
    aux[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        aux[i] = aux[i - 1] + v[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        long long sum = aux[r] - aux[l - 1];
        cout << sum << endl;
    }

    return 0;
}
