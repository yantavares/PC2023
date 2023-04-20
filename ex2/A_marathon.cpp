#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, el, el2, count = 0;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> el;
        count = 0;
        for (size_t i = 0; i < 3; i++)
        {
            cin >> el2;
            if (el2 > el)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}