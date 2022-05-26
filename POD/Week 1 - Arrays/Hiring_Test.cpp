#include <bits/stdc++.h>
using namespace std;

ll MOD = 998244353;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    string ans;
    for (int i = 0; i < n; i++)
    {
        //getting each evalution
        string s;
        cin >> s;
        //count of complete and partial answers
        int f = count(s.begin(),s.end(),'F');
        int p = count(s.begin(), s.end(), 'P');

        //either X complete answers should be satisfied
        //or X-1 complete answers and Y partial answers should be satisfied
        if (f >= x || (f >= x - 1 && p >= y))
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}

//time complexity: O(n) for n evalutions
//space complexity: O(nm) for n strings of m length