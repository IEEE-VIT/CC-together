#include <iostream>
#include <string>
using namespace std;

int main()
{
	string c;
	cin >> c;
	string ans = "";
	for(int i = 0; i < c.length(); i++)
	{
		if(c[i] == '.')
		ans += "0";
		else if (c[i] == '-' && c[i+1] == '.')
		{
			ans += '1';
			i++;
		}
		else
		{
			ans += '2';
			i++;
		}
	}
	cout << ans;
}

//time complexity : O(n)