#include <iostream>
using namespace std;

int sumOfElements(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{

    int n, sumofX = 0, sumofY = 0, sumofZ = 0;
    cin >> n;
    int x[n], y[n], z[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    sumofX = sumOfElements(x, n);
    sumofY = sumOfElements(y, n);
    sumofZ = sumOfElements(z, n);

    if (sumofX == 0 && sumofY == 0 && sumofZ == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}