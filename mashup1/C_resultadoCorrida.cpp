#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, el;
    vector<int> nums;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> el;
        nums.push_back(el);
    }

    vector<int> sorted_nums{nums};
    sort(begin(sorted_nums), end(sorted_nums));

    for (auto i : nums)
    {
        cout << (lower_bound(sorted_nums.begin(), sorted_nums.end(), i) - sorted_nums.begin()) + 1 << " ";
    }
}