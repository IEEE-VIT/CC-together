#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        long s;
        cin >> n >> s;
        int a[n];
        long sum = 0;
        int lower = 0;
        for (int count = 0; count < n; count++)
        {
            cin >> a[count];
        }
        bool found = 0;
        for (int count = 0; count < n; count++)
        {
            sum += a[count];
            while (sum > s && lower <= count)
            {
                sum -= a[lower];
                lower++;
            }
            if (sum == s)
            {
                cout << lower + 1 << " " << count + 1 << endl;
                found = 1;
                break;
            }
        }
        if (!found)
            cout << -1 << endl;
    }

    return 0;
}