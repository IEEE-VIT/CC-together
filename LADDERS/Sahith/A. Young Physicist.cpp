#include<iostream>
using namespace std;

int main()
{
	int n,x=0,y=0,z=0;
	cin >> n;
	while(n--)
	{
		int x1,y1,z1;
		cin >> x1 >> y1 >> z1;
		x += x1;
		y += y1;
		z += z1;
	}
	if(x==0 && y==0 && z==0)
	printf("YES");
	else
	printf("NO");
}

// Time complexity is O(n)