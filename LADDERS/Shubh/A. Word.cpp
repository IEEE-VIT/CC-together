#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;

    a = a + ' ';

    int u = 0, l = 0;
    int i = 0;

    while (a[i] != ' ')
    {
        if (isupper(a[i]))
        {

            u++;
            cout << u;
        }
        else
        {
            l++;
            cout << l;
        }
        i++;
    }
    for (int i = 0; i < a.length(); i++)
    {
        if (u > l)
        {
            cout << (char)toupper(a[i]);
        }
        else if (l < u)
        {
            cout << (char)tolower(a[i]);
        }
        else if (l == u)
            cout << (char)tolower(a[i]);
    }
}
