#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(2);
    int n;
    cin >> n;

    double end, count = 0, k = 0;

    char a, b;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == b)
        {
            count++;
        }
        k++;
    }
    end = (count / k) * 10;
    cout << "Nota: " << (count / k) * 10 << endl;
}