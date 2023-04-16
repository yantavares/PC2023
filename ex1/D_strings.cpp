#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, size;
    string s, ns;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> size;
        cin >> s;
        ns = s[size - 1];
        for (size_t l = 0; l < size; l++)
        {
            cout << ns;
        }
        cout << endl;
    }
}