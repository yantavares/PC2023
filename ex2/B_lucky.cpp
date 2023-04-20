#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, count1 = 0, count2 = 0;
    string t;

    cin >> n;

    for (size_t k = 0; k < n; k++)
    {
        count1 = 0;
        count2 = 0;
        cin >> t;
        for (size_t i = 0; i < 3; i++)
        {
            count1 += (t[i] - '0');
        }
        for (size_t i = 3; i < 6; i++)
        {
            count2 += (t[i] - '0');
        }
        if (count1 == count2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}