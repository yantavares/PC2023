#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    queue<int> fila;

    int n, e, am, max, end = 0, count = 0;

    cin >> n >> am >> max;

    for (size_t i = 0; i < n; i++)
    {
        cin >> e;
        fila.push(e);
    }

    while (!fila.empty())
    {
        int p = fila.front();
        if (count % am == 0)
        {
            if (p <= max)
            {
                end += 5;
                fila.pop();
            }
            else
            {
                end += 10;
                fila.push(p - 2);
                fila.pop();
            }
        }
        else
        {
            end += 1;
            fila.pop();
        }
        count++;
    }
    cout << end << endl;
    return 0;
}