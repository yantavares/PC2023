#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int count = 0;
    int end = 0;
    bool shouldCount = false;

    cin >> s;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == 'r')
        {
            for (size_t j = i + 1; j < s.length(); j++)
            {
                if (j == s.length() - 1)
                {
                    if (s[j] == '.')
                    {
                        end += count + 1;
                        i = j;
                        break;
                    }
                    else if (s[j] == 'r')
                    {
                        end += count;
                        i = j;
                        break;
                    }
                }

                if (s[j] == '.')
                {
                    count++;
                }
                else if (s[j] == 'r')
                {
                    i = j - 1;
                    end += count;
                    count = 0;
                    break;
                }
                else
                {
                    count = 0;
                    i = j - 1;
                    break;
                }
            }
        }
    }

    cout << end;

    return 0;
}