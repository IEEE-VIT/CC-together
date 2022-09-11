#include <iostream>
using namespace std;

int tapped[4][4];
int changed[4][4];

int main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> tapped[i][j];
            changed[i][j] = tapped[i][j];
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (tapped[i][j] != 0)
            {
                changed[i - 1][j] += tapped[i][j];
                changed[i + 1][j] += tapped[i][j];
                changed[i][j - 1] += tapped[i][j];
                changed[i][j + 1] += tapped[i][j];
            }
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        {
            for (int j = 1; j <= 3; j++)
            {
                if (changed[i][j] % 2)
                {
                    cout << "0";
                }

                else
                {
                    cout << "1";
                }
            }
            cout << '\n';
        }
    }

    return 0;
}