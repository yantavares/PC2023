#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, g, f, c, count = 0;

    cin >> n >> g >> f >> c;

    if (g >= f)
        count += f;
    else
        count += g;

    count += c;

    if (count > n)
        count = n;

    cout << count << endl;

    return 0;
}