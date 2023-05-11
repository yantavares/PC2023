#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, y, max = 0;
    char x;
    stack<pair<int, int>> pres;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {

        cin >> x >> y;

        if (x == 'A')
        {
            if (y > max)
            {
                max = y;
            }
            pres.push({y, max});
        }
        else if (x == 'V')
        {
            if (!pres.empty())
            {

                cout << pres.top().second << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            if (!pres.empty())
            {
                pres.pop();
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}