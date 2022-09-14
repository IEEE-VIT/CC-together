#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(1)
	{
		n++;
		int flag = 0;
		if (n%10 == (n/10)%10 || n%10 == (n/100)%10 || n%10 == (n/1000) || (n/10)%10 == (n/100)%10 || (n/10)%10 == (n/1000) || (n/100)%10 == (n/1000) )
		flag = 1;
		if(flag == 0)
		{
			cout << n;
			break;
		}
	}
}

//Time complexity : O(n)
