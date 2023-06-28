#include <bits/stdc++.h>

using namespace std;

int MSB(int num)
{
    int position = 0;
    while (num != 0)
    {
        num = num >> 1;
        position++;
    }

    return position;
}

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {

        int n;

        cin >> n;

        int decimalValue = pow(2, MSB(n) - 1);

        if (decimalValue == n)
        {
            decimalValue /= 2;
        }

        if (n == 1)
        {
            cout << "0";
        }

        else
        {

            for (size_t i = 1; i < n; i++)
            {
                if (i == decimalValue)
                {
                    cout << "0 " << decimalValue << " ";
                }
                else
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
