#include <bits/stdc++.h>
using namespace std;

int somaDig(int n)
{
    int s = 0;
    while (n != 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, count = 0, s;

    cin >> n >> a >> b;

    for (size_t i = 1; i <= n; i++)
    {
        s = somaDig(i);
        if (s >= a && s <= b)
        {
            count += i;
        }
    }
    cout << count << endl;
    return 0;
}