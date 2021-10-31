#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int>& p1, pair<int,int>& p2)
{
	return p1.second<p2.second;
}

int main()
{
	priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;

	int n, maxMin; cin >> n >> maxMin;

	int s, e;

	for (int i=0; i<n; i++)
	{
		cin >> s >> e;
		pq.push({s+e, e});
	}

	int curEnd = 0;
	int tot = 0;

	while (!pq.empty())
	{
		auto cur = pq.top(); pq.pop();

		if (curEnd != 0 && cur.second - curEnd >= maxMin)
			tot++;

		curEnd = cur.second;
	}

	cout << tot << endl;



	return 0;
}
