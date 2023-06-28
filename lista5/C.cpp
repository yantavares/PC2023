#include <iostream>

using namespace std;

int solve(int n)
{
    int highestBit = 31 - __builtin_clz(n);
    int largestK = (1 << highestBit) - 1;
    return largestK;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int largestK = solve(n);
        cout << largestK << endl;
    }

    return 0;
}
