#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, i, u, temp, v = 0;
    vector<int> vtemp;
    queue<vector<int>> cam;
    stack<int> boxes;

    cin >> n >> i >> u;

    for (size_t i = 0; i < n; i++)
    {
        cin >> temp;
        vtemp.push_back(temp);
    }
    for (auto &&i : vtemp)
    {
        cin >> temp;
        if (temp == 1)
        {
            cam.push({i / u, temp, 0});
        }
        else
        {
            cam.push({i, temp, 0});
        }
    }
    for (size_t i = 0; i < i; i++)
    {
        boxes.push(1);
    }
    while (!cam.empty())
    {
        if (cam.front()[1] == 1)
        {
            for (size_t j = 0; j < cam.front()[0]; j++)
            {
                cam.front()[2]++;
                if (boxes.empty())
                {
                    if (cam.front()[2] > 2)
                    {
                        cam.pop();
                        break;
                    }
                    else
                    {
                        cam.push(cam.front());
                        cam.pop();
                        break;
                    }
                }

                else if (cam.front()[0] == 0)
                {
                    cam.pop();
                    break;
                }

                else
                {
                    cam.front()[0]--;
                    boxes.pop();
                }
            }
        }
        else
        {

            for (size_t k = 0; k < cam.front()[0] / u; k++)
            {
                boxes.push(1);
            }
            v += cam.front()[0] % u;
            if (v >= u)
            {
                boxes.push(1);
                v -= u;
            }
            cam.pop();
        }
    }
    cout << (boxes.size() * u) + v << endl;
    return 0;
}