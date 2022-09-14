#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int row,column,r=1,c=1,ans=0;
	for(int i = 0; i < 5;i++)
	{
		c = 1;
		for(int j = 0;j<5;j++)
		{
			int temp;
			cin >> temp;
			if(temp==1)
			{
				row=r;
				column = c;
			}
			c++;
		}
		r++;
	}
	ans = abs(row-3) + abs(column-3);
	cout << ans;
	return 0;
}

//time complexity : O(n2) --> n=5
