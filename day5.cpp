#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int max = INT_MIN;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > max && (j == n - 1 || a[j] > a[j + 1]))
            {
                count++;
            }
            if (a[j] > max)
            {
                max = a[j];
            }
        }
        cout << "Case #" << i + 1 << ": " << count << endl;
    }

    return 0;
}