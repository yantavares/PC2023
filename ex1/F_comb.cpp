#include <bits/stdc++.h>
using namespace std;

vector<long> findSum(vector<long> v)
{
    long count;
    for (long i = 1; i < 4; i++)
    {
        for (int count = i + 1; count < 5; count++)
        {
            if (v[i] + v[count] == v[5])
            {
                return {v[i], v[count]};
            }
        }
    }
    return {-1};
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long n, x;
    vector<long> v;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        v.clear();
        for (size_t i = 0; i < 7; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        cout << v[0] << " " << findSum(v)[0] << " " << findSum(v)[1] << endl;
    }

    return 0;
}