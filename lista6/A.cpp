#include <iostream>
#include <vector>

using namespace std;

bool solve(int n, int t, const vector<int> &a)
{
    int curr = 1;

    while (curr < t)
    {
        curr += a[curr - 1];

        if (curr == t)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;

    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    if (solve(n, t, a))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
