#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x == 1)
        {
            if (k == 1)
                cout << "NO" << endl;
            else
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << endl;
                }
                else
                {
                    if (k < 3)
                        cout << "NO" << endl;
                    else
                    {
                        int target = n - 3;
                        cout << "YES" << endl;
                        cout << target / 2 + 1 << endl;
                        cout << 3 << " ";
                        for (int i = 0; i < target / 2; i++)
                            cout << 2 << " ";
                        cout << endl;
                    }
                }
            }
        }
        else
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << endl;
        }
    }
    return 0;
}