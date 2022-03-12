#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <map>
#define siz(arr) sizeof(arr)/sizeof(arr[0])
using namespace std;
#define mp make_pair

map<int, int> mpOrders;

void solve(int orders[], int n, int sums[], int k, int last, int unsorted[])
{
	vector<pair<int, int>> dp(last+1, mp(0,0));
	dp[0] = mp(1, 0);



	for(int i=0; i<n; i++)
	{
		for(int j=orders[i]; j<=last; j++)
		{
			dp[j].first = dp[j].first+dp[j-orders[i]].first;

			if(dp[j-orders[i]].first == 1)
				dp[j].second = mpOrders[orders[i]];
		}
	}

	for(int i=0; i<k; i++)
	{
		if(dp[unsorted[i]].first > 1)
			cout << "Ambiguous" << endl;
		else if(dp[unsorted[i]].first == 0)
			cout << "Impossible" << endl;
		else
		{
			priority_queue<int, vector<int>, greater<int>> pq;

			int cur = unsorted[i];


			while(cur>=0)
			{
				pq.push(dp[cur].second);

				cur -= orders[dp[unsorted[i]].second-1];
			}


			while(!pq.empty())
			{
				if(pq.top() != 0)
					cout << pq.top() << ' ';
				pq.pop();
			}

			cout << endl;
		}
	}

}




int main()
{
	int n; cin >> n;
	int orders[n];


	for(int i=0; i<n; i++)
	{
		cin >> orders[i];
		mpOrders[orders[i]] = i+1;
	}
	sort(orders, orders+n);

	int m; cin >> m;
	int sums[m];
	int unsorted[m];

	int mx = 0;
	for(int i=0; i<m; i++)
	{
		cin >> sums[i];
		mx = max(mx, sums[i]);
		unsorted[i] = sums[i];
	}

	solve(orders, siz(orders), sums, siz(sums), mx, unsorted);

	return 0;
}
