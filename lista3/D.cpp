#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long a;
    vector<long> v1, v2, v3;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }

    for (size_t i = 0; i < n - 1; i++)
    {
        cin >> a;
        v2.push_back(a);
    }

    cout << accumulate(v1.begin(), v1.end(), 0) - accumulate(v2.begin(), v2.end(), 0) << endl;

    for (size_t i = 0; i < n - 2; i++)
    {
        cin >> a;
        v3.push_back(a);
    }

    cout << accumulate(v2.begin(), v2.end(), 0) - accumulate(v3.begin(), v3.end(), 0) << endl;

    return 0;
}