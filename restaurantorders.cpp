#include <iostream>
#include <unordered_map>
#include <cstring>
#include <vector>
#include <map>
#define sz(arr) sizeof(arr)/sizeof(arr[0])
using namespace std;


void solve(int orders[], int n, unordered_map<int, int>& mp, map<int, int>& sums, int last)
{
	int dp[last+1][n];
	for(int i=0; i<n; i++)
		dp[0][i] = 1;


	int x, y;
	for(int i=1; i<=last; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i-orders[j] >= 0)
				x = dp[i-orders[j]][j];
			else
				x = 0;

			if(j>=1)
				y = dp[i][j-1];
			else
				y = 0;
			dp[i][j] = x+y;
		}
	}

	for(auto it : sums)
	{
		if(dp[it.first][n-1] == 0)
			cout << "Impossible" << endl;
		else if(dp[it.first][n-1] > 1)
			cout << "Ambiguous" << endl;
		else
		{
				for(int j=1; j<=it.first; j++)
				{
					if(dp[j][0] == 1)
						cout << j << ' ';
				}
				cout << endl;
		}
	}
}


int main()
{
	int n; cin >> n;
	int orders[n];
	unordered_map<int, int> mp;

	for(int i=0; i<n; i++)
	{
		cin >> orders[i];
		mp[orders[i]] = i+1;
	}


	int last;
	map<int, int> sums;
	int t; cin >> t;

	int tmp;
	for(int i=0; i<t; i++)
	{
		cin >> tmp;
		sums[tmp] = i;

		if(i == t-1)
			last = tmp;
	}

	solve(orders, n, mp, sums, last);


	return 0;
}
