#include <iostream>
using namespace std;

int main()
{
	int n,shift;
	cin >> n >> shift;
	string c;
	cin >> c;
	while(shift--)
	{
		for(int j = 0; j < n-1;j++)
		{
			if(c[j] == 'B' && c[j+1] == 'G')
			{
				c[j] = 'G';
				c[j+1] = 'B';
				j++;
			}
		}
	}
	cout << c;
}

//time complexity : O(n2)