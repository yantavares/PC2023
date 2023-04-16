#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x, y, preco, x1, y1, p, menor = 99999, ind, t;

    cin >> n >> x >> y;

    for (size_t i = 1; i <= n; i++)
    {
        cin >> x1 >> y1 >> p;

        t = ((abs(x - x1) + abs(y - y1)) * 2) + p;

        if (t < menor)
        {
            menor = t;
            ind = i;
        }
    }

    cout << menor << " " << ind << endl;

    return 0;
}