#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, a, menor = INT_MAX, count = 0;
    vector<int> v;

    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        for (size_t k = 0; k < n; k++)
        {

            cin >> a;
            if (a < menor)
            {
                menor = a;
            }
            v.push_back(a);
        }
        for (size_t k = 0; k < n; k++)
        {
            if (v[k] > menor)
            {
                count += v[k] - menor;
            }
        }
        cout << count << endl;
        count = 0;
        v.clear();
        menor = INT_MAX;
    }

    return 0;
}