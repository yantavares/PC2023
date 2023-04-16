#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int in, count = 0;
    vector<int> is;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> in;
        is.push_back(in);
    }

    sort(is.begin(), is.end());

    for (auto i : is)
    {

        if (count + 1 <= i)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}