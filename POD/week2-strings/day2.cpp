#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int count = 0; count < n; count++)
    {
        string temp;
        cin >> temp;
        int sum = 0;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < temp.length(); i++)
        {
            sum += (i + 1) * (temp[i] - 97 + 1);
        }
        cout << sum << endl;
    }

    return 0;
}