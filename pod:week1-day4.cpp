#include <iostream>
using namespace std;
int check(int arr[], int n, int sum)
{
	/* Initialize cursum as value of
	first element and starting point as 0 */
	int cursum = arr[0], start = 0, i;

	/* Add elements one by one to cursum and
	if the cursum exceeds the sum,
	then remove starting element */
	for (i = 1; i <= n; i++) {
		while (cursum > sum && start < i - 1) {
			cursum = cursum - arr[start];
			start++;
		}

		// If curr_sum becomes equal to sum,
		// then return true
		if (cursum == sum) {
			cout << start+1 <<" "<< i<<endl;;
			return 1;
		}

		// Add this element to curr_sum
		if (i < n)
			cursum = cursum + arr[i];
	}

	// If we reach here, then no subarray
	cout << -1;
	return 0;
}
int main()
{
	int temp;
	cin>>temp;
	while(temp--)
	{
		int n,s;
		cin>>n>>s;
		int arr[n];
		for (int h=0;h<n;h++)
		{
			cin>>arr[h];
		}
		check(arr, n, s);
	}
	return 0;
}
