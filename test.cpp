#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, a, middle = 0, menor = INT_MAX, maior = -1, count = 0;
    set<int> v;

    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        for (size_t k = 0; k < n; k++)
        {

            cin >> a;
            middle += a;

            if (a > maior)
            {
                maior = a;
            }
            if (a < menor)
            {
                menor = a;
            }
            v.insert(a);
        }

        vector<char> s(v.begin(), v.end());

        middle = middle / n;
        for (size_t k = 0; k < n; k++)
        {
            if (s[k] < middle)
            {
                count += middle - s[k];
            }
            else
            {
                count += s[k] - middle;
            }
        }
        cout << count << endl;
        count = 0;
        v.clear();
        maior = -1;
        middle = 0;
        menor = INT_MAX;
    }

    return 0;
}