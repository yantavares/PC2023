#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, id;
    long el;
    cin >> n;

    vector<long> prods;

    for (size_t i = 0; i < n; i++)
    {
        cin >> id >> el;

        if (id == 2)
        {
            if (find(prods.begin(), prods.end(), el) != prods.end())
            {
                cout << "Sim" << endl;
            }
            else
            {
                cout << "Nao" << endl;
            }
        }
        else
        {
            prods.push_back(el);
        }
    }

    return 0;
}
