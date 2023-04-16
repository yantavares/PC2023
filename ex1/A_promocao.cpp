#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (d / c < b / a)
    {
        cout << "Promocao";
    }
    else
    {
        cout << "Enganacao";
    }
}
