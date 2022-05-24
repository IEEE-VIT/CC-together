#include <bits/stdc++.h>

using namespace std;

void checkStudent(int m, int x, int y)
{
    int count[2]; // to store the count of solved completely and partial solve
    for (int i = 0; i < 2; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        char temp;
        cin >> temp;
        if (temp == 'F')
            count[0]++;
        else if (temp == 'P')
            count[1]++;
    }
    if (count[0] >= x || (count[0] == (x - 1) && count[1] >= y))
    {
        cout << 1;
        return;
    }
    cout << 0;
    return;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        // loop through every student
        for (int j = 0; j < n; j++)
        {
            checkStudent(m, x, y);
        }
        cout << endl;
    }
    return 0;
}