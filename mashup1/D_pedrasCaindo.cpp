#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (size_t count = 0; count < n; count++)
    {
        int i, j;
        char el;
        cin >> i >> j;

        char arr[i][j];

        for (int c1 = 0; c1 < i; c1++)
        {
            for (int c2 = 0; c2 < j; c2++)
            {
                cin >> el;
                arr[c1][c2] = el;
            }
        }

        for (size_t l = 0; l < i - 1; l++)
        {
            for (int c1 = 0; c1 < i - 1; c1++)
            {
                for (int c2 = 0; c2 < j; c2++)
                {
                    if (arr[c1][c2] == '*')
                    {
                        if (arr[c1 + 1][c2] == '.')
                        {
                            arr[c1 + 1][c2] = '*';
                            arr[c1][c2] = '.';
                        }
                    }
                }
            }
        }
        for (int c1 = 0; c1 < i; c1++)
        {
            for (int c2 = 0; c2 < j; c2++)
            {
                cout << arr[c1][c2];
            }
            cout << endl;
        }
    }
    return 0;
}
