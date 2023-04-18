#include <bits/stdc++.h>
#include <string>
using namespace std;

int find_last_occ(string s, int k)
{
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] - '0' == k)
        {
            return i;
        }
    }
    return -1;
}
int find_first_occ(string s, int k)
// da pra fazer com lower bound
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] - '0' == k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int lin, col, fline = 99, lline = -1, fcol = 99, lcol = -1, last, fst, count = 0, end1, end2;

    cin >> lin >> col;

    string n;

    for (size_t i = 0; i < lin; i++)
    {
        cin >> n;
        last = find_last_occ(n, 1);
        fst = find_first_occ(n, 1);
        // cout << fst << endl;

        if (last != -1)
        {
            if (count > lcol)
            {
                lcol = count;
            }
            if (count < fcol)
            {
                fcol = count;
            }
            if (last > lline)
            {
                lline = last;
            }
            if (fst < fline)
            {
                fline = fst;
            }
        }

        // cout << fline << " " << lline << " " << fcol << " " << lcol << " " << endl;

        count++;
    }
    end1 = lline - fline + 1;
    end2 = lcol - fcol + 1;
    if (end1 == -99)
    {
        end1 = 0;
    }
    if (end2 == -99)
    {
        end2 = 0;
    }

    cout << end1 << "x" << end2;

    return 0;
}