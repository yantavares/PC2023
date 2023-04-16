#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<string>::iterator it;
    string name;
    vector<string> names, names1;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> name;
        names.push_back(name);
    }

    copy(names.begin(), names.end(), back_inserter(names1));

    sort(names1.begin(), names1.end());

    for (size_t i = 0; i < n; i++)
    {
        it = find(names1.begin(), names1.end(), names[i]);
        if (it != names1.end())
        {

            // calculating the index
            // of K
            int index = it - names1.begin();
            cout << index << " ";
        }
    }

    return 0;
}