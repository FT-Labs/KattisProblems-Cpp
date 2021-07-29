#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int kitten; cin >> kitten;

	vector<vector<int>> dp;
	dp.push_back(vector<int>());
	int cur = 0;
	int tmp;
	int n;


	while(cin >> n)
	{
		if(n == -1)
			break;

		dp[cur].push_back(n);

		if(cin.peek() == '\n')
		{
			cur++;
			dp.push_back(vector<int>());
		}
	}




	while(kitten != dp[0][0])
	{
		cout << kitten << ' ';

		for(int i=0;i<dp.size();i++)
		{
			if(dp[i][0] == kitten)
				continue;

			if(find(dp[i].begin(),dp[i].end(),kitten) != dp[i].end())
			{
				kitten = dp[i][0];
				break;
			}
		}
	}

	cout << kitten << endl;


	return 0;
}
