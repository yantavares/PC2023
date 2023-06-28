#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, end = 0, count = 0;

    cin >> a;

    long long temp = a;

    while (a > 0)
    {
        if (!(a & 1))
        {
            end += pow(2, count);
        }
        count++;
        a = a >> 1;
    }
    cout << temp << " " << end << endl;
    return 0;
}