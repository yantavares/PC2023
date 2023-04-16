#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, n;

    cin >> a >> n;

    if (a % 500 <= n)
    {
        cout << "Sim";
    }
    else
    {
        cout << "Nao";
    }

    return 0;
}