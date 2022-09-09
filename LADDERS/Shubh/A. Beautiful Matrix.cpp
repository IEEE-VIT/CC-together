#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    int n = 0, m = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                n = i;
                m = j;
                        }
        }
    }

    if (n > 2)
    {
        while (n != 2)
        {
            n--;
            c++;
        }
    }
    else if (n < 2)
    {
        while (n != 2)
        {
            n++;
            c++;
        }
    }
    if (m > 2)
    {
        while (m != 2)
        {
            m--;
            c++;
        }
    }
    else if (m < 2)
    {
        while (m != 2)
        {

            m++;
            c++;
        }
    }

    cout << c;
}