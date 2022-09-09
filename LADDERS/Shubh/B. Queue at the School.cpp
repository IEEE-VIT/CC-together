#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string a;
    cin >> a;

    while (t != 0)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'B' && a[i + 1] == 'G')
            {
                swap(a[i + 1], a[i]);
                i++;
            }
        }
        t--;
    }
    cout << a;
}