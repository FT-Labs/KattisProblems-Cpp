#include <bits/stdc++.h>
#include <cstring>
using namespace std;


long knapSack(long arr[], long n, long half)
{
	long dp[n][half];
	memset(dp, 0, sizeof(dp));

	for(long i=1; i<n; i++)
	{
		for(long j=0; j<half; j++)
		{
			if(arr[i-1] > j)
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = max(dp[i-1][j], arr[i-1] + dp[i-1][j-arr[i-1]]);
		}
	}
	return dp[n-1][half-1];
}


int main()
{
	long n;

	while(cin >> n && n)
	{
		long arr[n];
		long sum = 0;
		for(long i=0; i<n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		long small = knapSack(arr, n+1, sum/2+1);
		cout << sum-small << ' ' << small << endl;
	}

    return 0;
}
