#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> tab(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tab[i][j];
        }
    }

    vector<vector<char>> end(n, vector<char>(m, '-'));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (tab[i][j] == '.')
            {

                if ((i + j) % 2 == 0)
                {
                    end[i][j] = 'B';
                }
                else
                {
                    end[i][j] = 'W';
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << end[i][j];
        }
        cout << endl;
    }

    return 0;
}
