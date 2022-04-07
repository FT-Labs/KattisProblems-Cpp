#include <iostream>
#include <string.h>
using namespace std;

const static int arr[] = {1, 2, 3};
const static int n = 3;

// simple dp
int solve(int m)
{
	int dp[m+1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;

	for (int i = 0; i < m+1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i - arr[j] >= 0)
				dp[i] += dp[i - arr[j]];
		}
	}

	return dp[m];
}


int main (int argc, char *argv[])
{
	int m; cin >> m;

	cout << solve(m) << endl;


	return 0;
}
