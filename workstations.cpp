#include <iostream>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	//Use greedy alg, but with early starting priority, not ending.
	priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;

	int n, maxMin; cin >> n >> maxMin;

	int s, e;

	for (int i=0; i<n; i++)
	{
		cin >> s >> e;
		pq.push({s, s+e});
	}

	multiset<int> ms;

	int tot = 0;

	while (!pq.empty())
	{
		auto cur = pq.top(); pq.pop();
		auto it = ms.lower_bound(cur.first- maxMin);

		if (it != ms.end() && *it <= cur.first)
		{
			ms.erase(it);
			tot++;
		}
		ms.insert(cur.second);
	}

	cout << tot << endl;

	return 0;
}
