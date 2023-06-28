#include <bits/stdc++.h>

using namespace std;

long pris(long N, long T, long C, vector<long> &crimes)
{
    long count = 0;
    long currCount = 0;

    for (long i = 0; i < N; i++)
    {
        if (crimes[i] > T)
        {
            currCount = 0;
        }
        else
        {
            currCount++;
            if (currCount >= C)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long N, T, C;
    cin >> N >> T >> C;

    vector<long> crimes(N);
    for (long i = 0; i < N; i++)
    {
        cin >> crimes[i];
    }

    long result = pris(N, T, C, crimes);
    cout << result << endl;

    return 0;
}
