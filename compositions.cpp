#include <iostream>
#include <algorithm>
#define size(arr) sizeof(arr)/sizeof(arr[0])
using namespace std;


// This is nearly the same as coin problem. Only difference is you have to calculate total number of solutions instead of minimum number of coins.


int solve(int sum, int m, int k)
{
	int dp[sum+1];
	fill(dp, dp+sum+1, 0);
	dp[0] = 1;


	for(int i=1; i<=sum; i++)
	{
		for(int j=0; j<=sum; j++)
		{
			if(i - j >= 0 && (j-m)%k != 0)
				dp[i] += dp[i-j];
		}
	}
	return dp[sum];
}


int main()
{
    int t; cin >> t;

    while (t--)
    {
        int d, n, m, k;
        cin >> d >> n >> m >> k;
        cout << d << " " << solve(n, m, k) << endl;
    }
	return 0;
}
