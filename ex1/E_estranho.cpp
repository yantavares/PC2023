#include <bits/stdc++.h>
#include <string>

using namespace std;

bool solve(string l)
{
    while (true)
    {
        if (l.length() >= 3)
        {

            if (l.substr(0, 3) == "144")
            {
                l = l.substr(3);
            }
            else if (l.substr(0, 2) == "14")
            {
                l = l.substr(2);
            }
            else if (l[0] == '1')
            {
                l = l.substr(1);
            }
            else
            {
                return false;
            }
        }
        else if (l == "1" || l == "14" || l == "" || l == "11")
        {
            return true;
        }
        else
        {
            return false;
        }
        // cout << l << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string l;

    cin >> l;

    if (solve(l))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}