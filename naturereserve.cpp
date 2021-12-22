#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int *rnk, *parent;

int find(int x)
{
	if (x != parent[x])
		parent[x] = find(parent[x]);
	return parent[x];
}

void union_set(int i, int j)
{
	if (rnk[i] > rnk[j])
		parent[j] = i;
	else
		parent[i] = j;

	if (rnk[i] == rnk[j])
		rnk[j]++;
}

int kruskal(vector<pair<int, pair<int, int>>>& edges, int n)
{
	int mst = 0;

	for (auto it : edges)
	{
		int setX = find(it.second.first), setY = find(it.second.second);

		if (setX != setY)
		{
			mst += it.first;
			union_set(setX, setY);
		}
	}
	return mst;
}

void reset(int n)
{
	for (int i=0; i<n; i++)
	{
		rnk[i] = 0;
		parent[i] = i;
	}
}

int main()
{
	int q; cin >> q;

	while (q--)
	{
		int n, m, l, s; cin >> n >> m >> l >> s;

		rnk = new int[n+1], parent = new int[n+1];

		reset(n+1);

		vector<pair<int, pair<int, int>>> edges(s+m, {0, {-1, 0}});

		for (int i=0; i<s; i++)
			cin >> edges[i].second.first;
		for (int i=0; i<m; i++)
			cin >> edges[s + i].second.first >> edges[s + i].second.second >> edges[s + i].first;

		sort(edges.begin(), edges.end());

		cout << kruskal(edges, n+1) + 1ll * (n - s) * l  << endl;

	}
	delete[] rnk, parent;
	return 0;
}
