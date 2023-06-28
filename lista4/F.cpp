#include <bits/stdc++.h>

using namespace std;

vector<int> aux(const vector<int> &message, const vector<int> &key, int c)
{
    int n = message.size();
    int m = key.size();

    vector<int> v(n);
    vector<int> delta(m + 1, 0);

    for (int i = 0; i < m; i++)
    {
        delta[i + 1] = delta[i] + key[i];
    }

    for (int i = 0; i < n; i++)
    {
        int start = max(0, i - m + 1);
        int end = min(n - m + 1, i + 1);

        int deltaIndex = min(i + 1, m);
        int suffixSumIndex = max(i - n + m, 0);

        v[i] = (message[i] + delta[deltaIndex] - delta[suffixSumIndex]) % c;
    }

    return v;
}

int main()
{
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> message(n);
    for (int i = 0; i < n; i++)
    {
        cin >> message[i];
    }

    vector<int> key(m);
    for (int i = 0; i < m; i++)
    {
        cin >> key[i];
    }

    vector<int> v = aux(message, key, c);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
