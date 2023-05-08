#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, s, end;

    cin >> n >> s;

    end = s / n;

    if (s % n == 0)
    {
        cout << end;
    }
    else
    {
        cout << end + 1;
    }
}