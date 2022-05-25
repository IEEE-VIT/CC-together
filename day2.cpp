/*
  Hiring Test

  A company conducted a coding test to hire candidates. N candidates appeared
  for the test, and each of them faced M problems. Each problem was either
  unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'),
  or solved completely (denoted by 'F'). To pass the test, each candidate needs
  to either solve X or more problems completely, or solve (X-1) problems
  completely, and Y or more problems partially. Given the above specifications
  as input, print a line containing N integers. The i-th integer should be 1
  if the i-th candidate has passed the test, else it should be 0.

  Question link:
  https://www.codechef.com/START3A/problems/HIRETEST
*/

#include <iostream>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int candidates, problems, x, y;
        cin >> candidates >> problems;
        cin >> x >> y;

        for (int i = 0; i < candidates; i++)
        {
            int p = 0, u = 0, f = 0;
            for (int j = 0; j < problems; j++)
            {
                char temp;
                cin >> temp;
                switch (temp)
                {
                case 'F':
                    f++;
                    break;
                case 'U':
                    u++;
                    break;
                case 'P':
                    p++;
                    break;
                }
            }
            if (f >= x)
                cout << "1";
            else if (f == x - 1 && p >= y)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}

/*
Time complexity = O(nm), since n candidates, m problems
Space complexity = O(1), no additonal data structures
*/