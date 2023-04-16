#include <bits/stdc++.h>
using namespace std;

bool bonito(int n)
{
    int s = 0, last = -1;
    vector<int> v;
    while (n != 0)
    {
        s = n % 10;
        v.push_back(s);
        n = n / 10;
    }
    set<int> ss(v.begin(), v.end());
    return (ss.size() == v.size());
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    n++;

    while (true)
    {
        if (bonito(n))
        {
            cout << n << endl;
            break;
        }
        n++;
    }

    return 0;
}